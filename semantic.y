%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;

  int id_type = 0; 
  int num_of_param = 0;
  int curr_arg = 0;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE

%token _IF
%token _ELSE
%token _RETURN

%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER

%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET

%token _ASSIGN
%token _SEMICOLON
%token _COMMA

%token <i> _AROP
%token <i> _RELOP
%token <i> _INCOP

%type <i> num_exp inc_exp exp literal function_call argument argument_list real_arg_list rel_exp 

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : function_list
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
        
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
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", $2);
      }
    _LPAREN real_param_list
      {
          set_atr1(fun_idx, num_of_param);
      }
    _RPAREN body
      {
        //print_symtab();
          //printf("\nnum_of_p: %d\nfun_indx:%d\n", num_of_param, fun_idx);
          //print_symtab();
          //printf("\nqweqweqwe\n");
          
          clear_symbols(fun_idx + num_of_param + 1); // ne brise parametre, vec ce u sledecoj petlji da im izbrise nazive
        
        if(num_of_param) 
        { 
          for (int i = 1; i < num_of_param + 1; i++) 
          {
            // fun_idx + 1 je zbog toga sto je fun_idx index fje a sledeci index je indeks prvog parametra
            clear_name(fun_idx + i);
          }
        }

        //print_symtab();

        var_num = 0;
        num_of_param = 0;
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
          insert_symbol($2, PAR, $1, ++num_of_param, NO_ATR);
        else 
           err("redefinition of '%s'", $2);
      

      }
  ;

body
  : _LBRACKET variable_list statement_list return_statement _RBRACKET
  | _LBRACKET variable_list statement_list _RBRACKET
    {
        if (get_type(fun_idx) != VOID)
          warning("function should return non void value.");
    }
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
      //printf("%d\n", $1);
    }
  id_list _SEMICOLON
  ;

id_list
  : _ID
      {
        if(lookup_symbol($1, VAR|PAR) == NO_INDEX)
           insert_symbol($1, VAR, id_type, ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", $1);
      }
  | id_list _COMMA _ID
      {
        if(lookup_symbol($3, VAR|PAR) == NO_INDEX)
           insert_symbol($3, VAR, id_type, ++var_num, NO_ATR);
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
  ;

compound_statement
  : _LBRACKET statement_list _RBRACKET
  ;

assignment_statement
  : _ID _ASSIGN num_exp _SEMICOLON
      {
        int idx = lookup_symbol($1, VAR|PAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
          if(get_type(idx) != get_type($3))
            {
                err("incompatible types in assignment");
      
                printf("1:%d\n", get_type(idx));
                printf("3:%d\n", get_type($3));
          
            }
      }
  ;

num_exp
  : exp
  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          {
            err("invalid operands: arithmetic operation");
            printf("1:%d\n", $1);
            printf("3:%d\n", $3);
          }
          
      }
  ;

inc_exp
  : _ID _INCOP 
    {
      $$ = lookup_symbol($1, VAR|PAR);
      if($$ == NO_INDEX)
        err("no variable named :'%s'", $1);
      
    }
  | _INCOP _ID 
    {
      $$ = lookup_symbol($2, VAR|PAR);
      if($$ == NO_INDEX)
        err("no variable named :'%s'", $2);
      
    }
  ;

exp
  : literal
  | inc_exp
  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | function_call
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
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
    _LPAREN real_arg_list _RPAREN
      {
        if(get_atr1(fcall_idx) != $4)
          err("wrong number of args to function '%s'", 
              get_name(fcall_idx));
        set_type(FUN_REG, get_type(fcall_idx));
        $$ = FUN_REG;

        curr_arg = 0;
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
  : num_exp
    { 
      curr_arg++;
      
      //printf("\ntype param: %d, type arg: %d\n", get_type(fcall_idx + curr_arg), get_type($1));
      //printf("\n param kind: %d\n", get_kind(fcall_idx + curr_arg));
      //print_symtab();

      if(get_type(fcall_idx + curr_arg) != get_type($1))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
      $$ = curr_arg;
    }
  ;

if_statement
  : if_part %prec ONLY_IF
  | if_part _ELSE statement
  ;

if_part
  : _IF _LPAREN rel_exp _RPAREN statement
  ;

rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: relational operator");
      }
  ;

return_statement
  : _RETURN num_exp _SEMICOLON
      {
        if(get_type(fun_idx) != get_type($2))
          err("incompatible types in return");
      }
  | _RETURN _SEMICOLON
    {
        if (get_type(fun_idx) != VOID)
          warning("function should return non void value.");
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

  synerr = yyparse();

  clear_symtab();
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count)
    printf("\n%d error(s).\n", error_count);

  if(synerr)
    return -1; //syntax error
  else
    return error_count; //semantic errors
}

