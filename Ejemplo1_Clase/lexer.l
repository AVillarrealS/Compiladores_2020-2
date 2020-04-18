%{
#include <stdio.h>
#include "tokens.h"
%}

%option noyywrap
%option yylineno

id [a-zA-Z_][a-zA-Z_0-9]*

%%
"+" { return MAS; }
"*" { return MUL; }
"(" { return LPAR; }
")" { return RPAR; }
{id}    { return ID; }
[ \t\n\r]+  {}
.   { printf("Error Léxico: %s\n", yytext);}

%%