%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;

  int id_type = 0; 
  int num_of_param = 0;
  int curr_arg = 0;

  int indx_para = 0;
  int indx_branch = 0;

  bool has_return = 0;

  int lab_num = -1;
  FILE *output;

  int glb_num = 0; // num of global vars
  int glb_before = 0;

  int var_num_before_id_list = 0;

  int rel_used = -1; // ako je bilo koja druga bool operacija ide sa jne, osim sa relacionim mora da se gleda koji je i tada ce cuvati koji je rel op

  int cond_exp_label = 0;

  unsigned glb_type = 0;
  
  ATR2* atr2_fcall = NULL; // za pozive fja
  ATR2* atr2_res = NULL; // ukoliko ima ugnjezdenih

  int para_label = -1;
  int branch_label = -1;

  GLB_IDS* glb_idsp = NULL;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE

%token _IF
%token _ELSE
%token _RETURN
%token _GLOBAL

%token <s> _PARA
%token _EN
%token _DDOT
%token _PASO

%token _BRANCH
%token _FIRST
%token _SECOND
%token _THIRD
%token _OTHERWISE

%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token <s> _BOOL_VALUE

%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _LSQRBRACKET
%token _RSQRBRACKET

%token _ASSIGN
%token _SEMICOLON
%token _COMMA
%token _RARROW
%token _QMARK
%token _DOUBLEDOT

%token _NOT

%token <i> _AROP
%token <i> _RELOP
%token <i> _INCOP
%token <i> _BOOLOP

%type <i> num_exp inc_exp exp literal function_call argument argument_list real_arg_list rel_exp exp_statement opt_assign conditional_exp exp_c
%type <i> bool_exp basic_bool
%type <i> paso_part 
%type <i> if_part 

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  :
  {
    // mora ovde inicijalizacija 
    atr2_res = create_atr2();
    atr2_fcall = create_atr2();
    glb_idsp = create_glbids();

  }
  glb_var_list
  function_list
  {  
    if(lookup_symbol("main", FUN) == NO_INDEX)
      err("undefined reference to 'main'");
  }
  ;

glb_var_list 
  :
  | glb_var_list glb_var
  ;

glb_var
  : 
  _TYPE glb_id_list opt_assign 
  {
    glb_before = glb_num; // u proslom prolazu, na pocetku 0
    glb_num = glb_idsp->occupied;

    for (int i = glb_before; i < glb_num; i++) 
    {
      gen_glbvar(insert_symbol(glb_idsp->ids[i], GLB, $1, i, create_atr2()));
    }
    //print_symtab();
  }
  ;

glb_id_list
  : _ID 
  { 
    add_id($1, strlen($1), glb_idsp);  
  }
  | glb_id_list _COMMA _ID 
  { 
    add_id($3, strlen($3), glb_idsp);
  }
  ;

function_list
  : function
  | function_list function
  ;

function
  : _TYPE _ID
      {
        fun_idx = lookup_symbol($2, FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, create_atr2());
        else 
          err("redefinition of function '%s'", $2);

        has_return = 0;
        
        code("\n%s:", $2);
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14"); 
      }
    _LPAREN real_param_list
      {
          set_atr1(fun_idx, num_of_param);
          
          ATR2* atr2p = get_atr2(fun_idx);
          if (atr2p == NULL) exit(55); // wrong index
          
          if(atr2p->occupied != num_of_param) exit(66); // not correct num of params
      }
    _RPAREN body
      {
        if(!has_return && (get_type(fun_idx) != VOID)) 
        {
          warning("function should return non void value.");
        }

        clear_symbols(fun_idx + 1); // ne brise parametre, vec ce u sledecoj petlji da im izbrise nazive

        var_num = 0;
        num_of_param = 0;
      
        code("\n@%s_exit:", $2);
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
        code("\n\t\tRET");
      }
  ;

real_param_list
  : /* no params */
  | parameter_list
  ;

parameter_list
  : parameter
  | parameter_list _COMMA parameter
  ;

parameter
  : _TYPE _ID
      {
        if ($1 == VOID)
          err("parameter %s can not be void.", $2);

        if(lookup_symbol($2, VAR|PAR) == NO_INDEX) 
        {
          insert_symbol($2, PAR, $1, ++num_of_param, create_atr2());
          
          ATR2* atr2p = get_atr2(fun_idx); // za svaki parametar koji prodje podesi atr2 za fju
          if (atr2p == NULL) exit(55); // wrong index
          atr2p->atr2[atr2p->occupied++] = $1;
        }
        else 
           err("redefinition of '%s'", $2);
      }
  ;

body
  : 
  _LBRACKET variable_list 
  {
    code("\n@%s_body:", get_name(fun_idx));
  } 
  statement_list _RBRACKET
  ;

variable_list
  : /* empty */
  | variable_list variable
  ;

variable
  : _TYPE 
  {
    if ($1 == VOID)
      err("variable can not be void.");

    id_type = $1;

    var_num_before_id_list = var_num;
  }
  id_list opt_assign
  {
    if ((get_type($4) != $1) && ($4 != -1))
    {
      err("incompatible types in assignment.");
    }
    
    int nod = var_num - var_num_before_id_list; // broj definisanih

    int size = ($1 == BOOL) ? 1 : 4; // jer je ili bool pa 1 byte ili int/uint pa 4 byte-a

    if (nod) 
    {
      code("\n\t\tSUBS\t%%15,$%d,%%15", size*nod); // za broj definisanih 
    }

    if ($4 != -1)
    { // ako su definisane promenljive
      for (int i = 1; i < nod + 1; i++) 
      {
        code("\n\t\tMOV ");
        gen_sym_name($4);
        code(",-%d(%%14)", (var_num_before_id_list + i) * size);
      }
    }
  
  }
  ;

opt_assign
  : _SEMICOLON { $$ = -1; }
  | _ASSIGN exp_statement { $$ = $2; /* vraca svoj indeks*/}
  ;

id_list
  : _ID
  {
    if(lookup_symbol($1, VAR|PAR) == NO_INDEX)
      insert_symbol($1, VAR, id_type, ++var_num, create_atr2());
    else 
      err("redefinition of '%s'", $1);    
  }
  | id_list _COMMA _ID
  {
    if(lookup_symbol($3, VAR|PAR) == NO_INDEX)
      insert_symbol($3, VAR, id_type, ++var_num, create_atr2());
    else 
      err("redefinition of '%s'", $3); 
  }
  ;

statement_list
  : /* empty */
  | statement_list statement
  ;

statement
  : compound_statement
  | assignment_statement
  | if_statement
  | exp_statement
  | para_statement
  | branch_statement
  | return_statement {has_return = 1;}
  ;

branch_statement
  : _BRANCH
  {
    code("\nbranch_%d:", ++branch_label);
  } 
  _LSQRBRACKET _ID
  {
    if((indx_branch = lookup_symbol($4, VAR|PAR|GLB)) == NO_INDEX)
      err("undefined '%s' in branch statement\n", $4);
  }
  _RARROW literal _RARROW literal _RARROW literal _RSQRBRACKET
  {
    int id_type = get_type(indx_branch);

    if (
      id_type != get_type($7) ||
      id_type != get_type($9) ||
      id_type != get_type($11)  
    )
      err("incompatible types in branch statement.\n");
  
    // code gen
    int indx = lookup_symbol($4, VAR|PAR|GLB);

    gen_cmp(indx, $7);
    code("\n\t\tJEQ branch_first_%d", branch_label);
    gen_cmp(indx, $9);
    code("\n\t\tJEQ branch_second_%d", branch_label);
    gen_cmp(indx, $11);
    code("\n\t\tJEQ branch_third_%d", branch_label);
    code("\n\t\tJMP branch_otherwise_%d", branch_label);
  }
  _FIRST
  {
    code("\nbranch_first_%d:", branch_label);
  }
  statement 
  {
    code("\n\t\tJMP branch_exit_%d", branch_label);
  }
  _SECOND
  {
    code("\nbranch_second_%d:", branch_label);
  }
  statement
  {
    code("\n\t\tJMP branch_exit_%d", branch_label);
  }
  _THIRD
  {
    code("\nbranch_third_%d:", branch_label);
  }
  statement
  {
    code("\n\t\tJMP branch_exit_%d", branch_label);
  }
  _OTHERWISE
  {
    code("\nbranch_otherwise_%d:", branch_label);
  }
  statement
  {
    code("\nbranch_exit_%d:", branch_label);
  }
  ;

para_statement
  : _PARA
  {
    code("\npara_%d:", ++para_label);
  }
  _ID 
  {
    int idx = lookup_symbol($3, VAR|PAR|GLB);
    if(idx == NO_INDEX)
      err("undefined '%s' in para statement", $3);
    
    indx_para = idx;
  }
  _EN _LPAREN literal _DDOT literal paso_part 
  {
    int idx_type = get_type(indx_para);
    int lit1_type = get_type($7);
    int lit2_type = get_type($9);

    int lit1 = atoi(get_name($7));
    int lit2 = atoi(get_name($9));
    
    int lit3;
    int lit3_type;
    
    if ($10 == -1) 
    {
      lit3_type = idx_type; // ako nije naveden paso izraz, racunace kao da je istog tipa kao idx
      lit3 = 1; // pozitivan broj da bi prosao uslov kasnije  
    }
    else 
    {
      lit3_type = get_type($10);
      lit3 = atoi(get_name($10)); 
    }

    // tipovi iteratora i parametara
    if (
      idx_type != lit1_type ||
      idx_type != lit2_type || 
      idx_type != lit3_type 
    )
    {
      err("incompatible types for para statement.\n");
    }

    // da li su vrednosti korektne, jer bi trebalo da 
    // lit1 < lit2 i lit3 > 0
    if (
      ! (lit1 < lit2 && lit3 > 0 ) 
    )
    err("invalid values for iterator constants.\n");

    // gen koda

    gen_mov($7, indx_para);
    int inc_indx = take_reg();
    
    $<i>$ = inc_indx; // da bi moglo da se koristi

    if ($10 == -1)
    {
      code("\n\t\tMOV $1,");
      gen_sym_name(inc_indx);
    }
    else 
    {
      gen_mov($10, inc_indx);
    }

    code("\npara_body%d:", para_label);
    gen_cmp(indx_para, $9);
    
    char sufix = get_type(indx_para) == INT ? 'S' : 'U';
    code("\n\t\tJGT%c para_exit%d", sufix, para_label);

  }
  _RPAREN statement 
  {
    char sufix = get_type(indx_para) == INT ? 'S' : 'U';
    
    code("\n\t\tADD%c ", sufix);
    gen_sym_name($<i>11);
    code(",");
    gen_sym_name(indx_para);
    code(",");
    gen_sym_name(indx_para);

    code("\n\t\tJMP para_body%d", para_label);
    code("\npara_exit%d:", para_label);

    free_if_reg($<i>11);
  }
  ;

paso_part
  : 
  { 
    $$ = -1; // ako nije naveden paso
  }
  | _PASO literal
  { 
    $$ = $2;
  }
  ;

exp_statement
  : num_exp _SEMICOLON { $$ = $1; /* jer vracaju svoj indeks iz tabele kao povratnu vrednost */ }
  | bool_exp _SEMICOLON { $$ = $1; }
  | conditional_exp _SEMICOLON { $$ = $1; }
  ;

compound_statement
  : _LBRACKET statement_list _RBRACKET
  ;

assignment_statement
  : _ID _ASSIGN exp_statement
      {
        int idx = lookup_symbol($1, VAR|PAR|GLB);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
        {
          if(get_type(idx) != get_type($3))
          {
                err("incompatible types in assignment");
          } 
        }
        gen_mov($3, idx);
      }
  ;

num_exp
  : exp
    { $$ = $1 ;}
  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          {
            err("invalid operands: arithmetic operation");
          }
        int t1 = get_type($1);    
        code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name($1);
        code(",");
        gen_sym_name($3);
        code(",");
        free_if_reg($3);
        free_if_reg($1);
        $$ = take_reg();
        gen_sym_name($$);
        set_type($$, t1);
      }
  ;

basic_bool
  : _BOOL_VALUE
    { 
      $$ = insert_literal($1, BOOL); 
      rel_used = -1;  
    }
  | rel_exp
  {
    $$ = $1;
  } 
  | exp _BOOLOP exp
    {
      rel_used = -1;
      // any expresion != 0 is true
      
      code("\n\t\t%s\t\t", bool_instructions[$2]);
      gen_sym_name($1);
      code(",");
      gen_sym_name($3);
      code(",");
      free_if_reg($1);
      free_if_reg($3);
      $$ = take_reg();
      gen_sym_name($$);
      set_type($$, get_type($3));
    }
  | _NOT _LPAREN basic_bool _RPAREN 
  { 
    code("\n\t\tNOT \t");
    gen_sym_name($3);
    
    $$ = $3;
    rel_used = -1;
  }
  | _NOT _LPAREN exp _RPAREN 
  { 
    $$ = $3;
    rel_used = -1;

    code("\n\t\tNOT\t\t");
    gen_sym_name($3);
    code(",");
    free_if_reg($3);
    $$ = take_reg();
    gen_sym_name($$);
    set_type($$, get_type($3));
  }
  | _LPAREN bool_exp _RPAREN 
  { 
    $$ = $2;
    rel_used = -1;
  }
  ;

bool_exp
  : basic_bool 
  {
    $$ = $1;
  }
  | bool_exp _BOOLOP basic_bool 
  {
    int t1 = get_type($1);    
    code("\n\t\t%s\t\t", bool_instructions[$2]);
    gen_sym_name($1);
    code(",");
    gen_sym_name($3);
    code(",");
    free_if_reg($3);
    free_if_reg($1);
    $$ = take_reg();
    gen_sym_name($$);
    set_type($$, t1);
  }
  ;

inc_exp
  : _ID _INCOP 
    {
      $$ = lookup_symbol($1, VAR|PAR|GLB);
      if($$ == NO_INDEX)
        err("no variable named :'%s'", $1); 

      int type = get_type($$);

      if(type == BOOL || type == VOID) 
      {
        err("wrong type in increment expression.");
      }

      int indx_temp = $$;

      $$ = take_reg();

      code("\n\t\tMOV\t"); // jer povratna vrednost ove akcije treba da bude x, ako je x++
      gen_sym_name(indx_temp);
      code(",");
      gen_sym_name($$);

      set_type($$, type);
      
      char sufix = (type == INT) ? 'S' : 'U'; 

      code("\n\t\tADD%c\t$1", sufix);
      code(",");
      gen_sym_name(indx_temp);
      code(",");
      gen_sym_name(indx_temp);

    }
  | _INCOP _ID 
    {
      $$ = lookup_symbol($2, VAR|PAR|GLB);
      if($$ == NO_INDEX)
        err("no variable named :'%s'", $2);
    
            int type = get_type($$);

      if(type == BOOL || type == VOID) 
      {
        err("wrong type in increment expression.");
      }

      int indx_temp = $$;
      
      char sufix = (type == INT) ? 'S' : 'U'; 

      code("\n\t\tADD%c\t$1", sufix);
      code(",");
      gen_sym_name(indx_temp);
      code(",");
      gen_sym_name(indx_temp);

      $$ = take_reg();

      code("\n\t\tMOV\t"); // jer povratna vrednost ove akcije treba da bude x, ako je x++
      gen_sym_name(indx_temp);
      code(",");
      gen_sym_name($$);

      set_type($$, type);
    }
  ;

exp
  : literal
    { $$ = $1; }
  | inc_exp
  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR|GLB);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | function_call
  {
      $$ = take_reg();
      gen_mov(FUN_REG, $$);
  }
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
  | _LPAREN conditional_exp _RPAREN
      { $$ = $2; }
  ;

conditional_exp
  : _LPAREN bool_exp _RPAREN _QMARK
  {
    $<i>$ = ++lab_num;
    code("\n@if%d:", $<i>$);
  } 
  exp_c 
  {
    int if_lab = $<i>5;

    // prvo se mora odrediti skok
    if (rel_used != -1) 
    { 
      code("\n\t\t%s\t@false%d", opp_jumps[$2], if_lab);
    }
    else
    {
      code("\n\t\tJEQ \t@false%d", if_lab);
    }

    code("\n@true%d:", if_lab);

    $<i>$ = take_reg();

    code("\n\t\tMOV "); // izvrsice se samo je ako je tacan uslov
    gen_sym_name($6);
    code(",");
    gen_sym_name($<i>$);

    set_type($<i>$, get_type($6));
    free_if_reg($6);

    code("\n\t\tJMP \t@exit%d", if_lab);

    code("\n@false%d:", if_lab);
  }
  _DOUBLEDOT exp_c 
  {
    if (get_type($6) != get_type($9)) 
    {
      err("incompatible types in conditional expression.");
    }

    code("\n\t\tMOV "); // izvrsice se samo je ako je tacan uslov
    gen_sym_name($9);
    code(",");
    gen_sym_name($<i>7);

    free_if_reg($9);

    code("\n@exit%d:", $<i>5); 
    
    $$ = $<i>7;
    set_type($$, get_type($6));
  }
  ;

exp_c
  : num_exp
    { $$ = $1; }
  | bool_exp
    { $$ = $1; }
  ;

literal
  : _INT_NUMBER
      { $$ = insert_literal($1, INT); }
  | _UINT_NUMBER
      { $$ = insert_literal($1, UINT); }
  ;

function_call
  : _ID 
      {
        fcall_idx = lookup_symbol($1, FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", $1);

      }
    _LPAREN 
    {
      atr2_res = atr2_fcall; // ukoliko ima ugnjezdenih
    } 
    real_arg_list _RPAREN
    {
      if(get_atr1(fcall_idx) != curr_arg)
        err("wrong number of args to function '%s'", 
            get_name(fcall_idx));

      // pushovanje argumenata suprotnim redosledom
      for( int i = curr_arg - 1; i >= 0; i--) 
      {
        int indx = atr2_fcall->atr2[i];

        free_if_reg(indx);
        code("\n\t\t\tPUSH\t");
        gen_sym_name(indx);
      }

      code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
      if($5 > 0)
        code("\n\t\t\tADDS\t%%15,$%d,%%15", $5 * 4);
      
      set_type(FUN_REG, get_type(fcall_idx));
      $$ = FUN_REG;
    
      curr_arg = 0;

      atr2_fcall = atr2_res; // vracanje na staru vrednost
    }
  ;

real_arg_list
  : /*no args*/
    {$$ = 0; }
  | argument_list
    {$$ = curr_arg; }
  ;

argument_list
  : argument 
  | argument_list _COMMA argument
  ;

argument
  : exp_c
    { 
      curr_arg++;
      
      ATR2* atr2p = get_atr2(fcall_idx);

      if(atr2p->atr2[curr_arg - 1] != get_type($1))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));

      atr2_fcall->occupied = curr_arg;
      atr2_fcall->atr2[curr_arg - 1] = $1; // cuva se indeks u tabeli argumenta da bi kasnije mogao da se pushuje suprotnim redosledom

      $$ = $1;
    }
  ;

if_statement
  : if_part %prec ONLY_IF 
    { code("\n@exit%d:", $1); }
  | if_part _ELSE statement
    { code("\n@exit%d:", $1); }
  ;

if_part
  : _IF _LPAREN
   {
      $<i>$ = ++lab_num;
      code("\n@if%d:", lab_num);
    }
   bool_exp
    {
      if (rel_used != -1) 
      {
        // mora da se vidi koji je jump
        code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3);
      }
      else 
      {
        // samo moze jeq
        code("\n\t\tJEQ \t@false%d", $<i>3); // jer ako je 0 onda nije tacna bool operacija iz zagrade
      }
      
      code("\n@true%d:", $<i>3);
      
    }
  _RPAREN statement
    {
        code("\n\t\tJMP \t@exit%d", $<i>3);
        code("\n@false%d:", $<i>3);
        $$ = $<i>3;
    }
  ;

rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: relational operator");

        $$ = $2 + ((get_type($1) - 1) * RELOP_NUMBER);
        gen_cmp($1, $3);

        rel_used = $$; // koji rel se koristi
      }
  ;

return_statement
  : _RETURN num_exp _SEMICOLON
      {

        if(get_type(fun_idx) != get_type($2))
          err("incompatible types in return");

        gen_mov($2, FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
      }
  | _RETURN bool_exp _SEMICOLON
    {
      if(get_type(fun_idx) != get_type($2))
        err("incompatible types in return");

        gen_mov($2, FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
    }
  | _RETURN _SEMICOLON
    {
        if (get_type(fun_idx) != VOID)
          warning("function should return non void value.");
    
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
    }
  ;

%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {

  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) 
  {
    printf("\n%d error(s).\n", error_count);
    remove("output.asm");
  }
  
  if(atr2_fcall)
  {
    free(atr2_fcall);
    atr2_fcall = 0;
  }
  
  if(atr2_res) 
  {
    atr2_res = 0;
    free(atr2_res);
  }
  
  free_glb_ids(glb_idsp); // oslobadja zauzetu strukturu

  if(synerr)
    return -1; //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127;
  else
    return 0;
}
