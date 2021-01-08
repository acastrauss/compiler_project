/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HIPSIM_TAB_H_INCLUDED
# define YY_YY_HIPSIM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _WORD = 258,
    _BYTE = 259,
    _PUSH = 260,
    _POP = 261,
    _CALL = 262,
    _RET = 263,
    _CMP = 264,
    _JMP = 265,
    _JEQ = 266,
    _JNE = 267,
    _JGT = 268,
    _JLT = 269,
    _JGE = 270,
    _JLE = 271,
    _JC = 272,
    _JNC = 273,
    _JO = 274,
    _JNO = 275,
    _ADD = 276,
    _SUB = 277,
    _MUL = 278,
    _DIV = 279,
    _MOV = 280,
    _HALT = 281,
    _AND = 282,
    _OR = 283,
    _XOR = 284,
    _NOT = 285,
    _REGISTER = 286,
    _CONSTANT = 287,
    _NUMBER = 288,
    _LABEL_DEF = 289,
    _LABEL = 290,
    _ADDRESS = 291,
    _COMMA = 292,
    _LPAREN = 293,
    _RPAREN = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "hipsim.y"

    long i;
    char* s;

#line 102 "hipsim.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HIPSIM_TAB_H_INCLUDED  */
