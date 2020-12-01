%option noyywrap yylineno

%{
   #include <string.h>
   #include "semantic.tab.h"
   #include "defs.h"
%}

%%

[ \t\n]+             { /* skip */ }

"if"                 { return _IF; }
"else"               { return _ELSE; }
"return"             { return _RETURN; }

"int"                { yylval.i = INT;  return _TYPE; }
"unsigned"           { yylval.i = UINT; return _TYPE; }
"bool"               { yylval.i = BOOL; return _TYPE; }
"void"               { yylval.i = VOID; return _TYPE; }


"true"|"false"          { yylval.s = strdup(yytext);
                          return _BOOL_VALUE; }

"("                  { return _LPAREN; }
")"                  { return _RPAREN; }
"{"                  { return _LBRACKET; }
"}"                  { return _RBRACKET; }
";"                  { return _SEMICOLON; }
"="                  { return _ASSIGN; }
","                  { return _COMMA; }

"+"                  { yylval.i = ADD; return _AROP; }
"-"                  { yylval.i = SUB; return _AROP; }

"++"                 { return _INCOP; }

"&&"|"and"           { yylval.i = AND; return _BOOLOP; }
"||"|"or"            { yylval.i = OR; return _BOOLOP; }
"!"|"not"            { yylval.i = NOT; return _BOOLOP; }
"^"|"xor"            { yylval.i = XOR; return _BOOLOP; }

"<"                  { yylval.i = LT; return _RELOP; }
">"                  { yylval.i = GT; return _RELOP; }
"<="                 { yylval.i = LE; return _RELOP; }
">="                 { yylval.i = GE; return _RELOP; }
"=="                 { yylval.i = EQ; return _RELOP; }
"!="                 { yylval.i = NE; return _RELOP; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.s = strdup(yytext);
                          return _ID; } // identifikator

[+-]?((0|[1-9][0-9]{0,9})|0b[01]{1,32}|0x[a-fA-F0-9]{1,8}) { yylval.s = strdup(yytext); 
                                                         return _INT_NUMBER;}

((0|[1-9][0-9]{0,9})|0b[01]{1,32}|0x[a-fA-F0-9]{1,8})[uU] { yylval.s = strdup(yytext); 
                       yylval.s[yyleng-1] = 0;
                       return _UINT_NUMBER;}

("//".*)|("/*"(.*|\r|\n)*"*/") { /* SKIP */ } // komentari

.                    { printf("line %d: LEXICAL ERROR on char %c\n", yylineno, *yytext);}

%%
