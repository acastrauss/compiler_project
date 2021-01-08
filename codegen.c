#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codegen.h"
#include "symtab.h"


extern FILE *output;
int free_reg_num = 0;
char invalid_value[] = "???";

// REGISTERS

int take_reg(void) {
  if(free_reg_num > LAST_WORKING_REG) {
    err("Compiler error! No free registers!");
    exit(EXIT_FAILURE);
  }
  return free_reg_num++;
}

void free_reg(void) {
   if(free_reg_num < 1) {
      err("Compiler error! No more registers to free!");
      exit(EXIT_FAILURE);
   }
   else
      set_type(--free_reg_num, NO_TYPE);
}

// Ako je u pitanju indeks registra, oslobodi registar
void free_if_reg(int reg_index) {
  if(reg_index >= 0 && reg_index <= LAST_WORKING_REG)
    free_reg();
}

// SYMBOL
void gen_sym_name(int index) {
  if(index > -1) {
    if(get_kind(index) == VAR) // -n*4(%14) 
    {
      int size = (get_type(index) == BOOL) ? 1 : 4; 
      code("-%d(%%14)", get_atr1(index) * size);
    }
    else 
      if(get_kind(index) == PAR) // m*4(%14) 
      {
        int size = (get_type(index) == BOOL) ? 1 : 4; 
        code("%d(%%14)", 4 + get_atr1(index) * 4);
      }
      else
        if(get_kind(index) == LIT) 
        {
          char* name = get_name(index);

          int lit = 0;

          if (strcmp(name, "true") == 0) 
          {
            lit = 1;
          }
          else if(strcmp(name, "false") == 0) 
          {
            lit = 0;
          }
          else
          {
            lit = atoi(name);
          }

          code("$%d", lit);
        
        }
        else //function, reg, moze i globalna
          code("%s", get_name(index));
  }
}

// OTHER

void gen_cmp(int op1_index, int op2_index) {
  if(get_type(op1_index) == INT)
    code("\n\t\tCMPS \t");
  else
    code("\n\t\tCMPU \t");
  gen_sym_name(op1_index);
  code(",");
  gen_sym_name(op2_index);
  free_if_reg(op2_index);
  free_if_reg(op1_index);
}

void gen_mov(int input_index, int output_index) {
  code("\n\t\tMOV \t");
  gen_sym_name(input_index);
  code(",");
  gen_sym_name(output_index);

  //ako se smešta u registar, treba preneti tip 
  if(output_index >= 0 && output_index <= LAST_WORKING_REG)
    set_type(output_index, get_type(input_index));
  free_if_reg(input_index);
}

void gen_glbvar(int indx) 
{
  code("\n%s:", get_name(indx));
  if (get_type(indx) == BOOL) 
  {
    code("\n\tBYTE\t1");     
  }
  else 
  {
    code("\n\tWORD\t1");
  }
}

int numexp_to_bool(int index) 
{
  int reg = take_reg(); // take reg
  gen_mov(index, reg); // prebaci se vrednost u taj registar
  return reg; // i vrati redni broj zauzetog registra
}