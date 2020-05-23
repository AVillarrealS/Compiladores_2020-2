/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    #include <string.h>
    #include "parser_rec_asc.h"
%}

id [a-zA-Z_][a-zA-Z_0-9]*
esp [ \n\t\r]+

%%
int     {return INT;}
float   {return FLOAT;}
{id}    {
            return ID;
        }
","     {return COMA;}
";"     {return PYC;}
{esp}   {}
.       {printf("Error Lexico: %s\n", yytext);}

%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
int yywrap(){
    return 1;
};