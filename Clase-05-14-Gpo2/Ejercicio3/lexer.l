/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "parser.tab.h"
%}

ent [0-9]+

%option noyywrap


%%
"+"     {return MAS;}
"*"     {return MUL;}
"("     {return LPAR;}
")"     {return RPAR;}
"\n"    {return SL;}
{ent}   {
            yylval.val = atoi(yytext);
            return NUMERO;
        }
[ \t]   {}
.       {printf("Erro Lexico: ",yytext);}


%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
//Código de usuario vacío...