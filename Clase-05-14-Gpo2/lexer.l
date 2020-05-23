/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    #include <string.h>
    #include "parser.tab.h"
%}

id [a-zA-Z_][a-zA-Z_0-9]*
esp [ \n\t\r]+

%%
int     {return INT;}
float   {return FLOAT;}
{id}    {
            if(yyleng>32){
                printf("Error Lexico %s excede la longitud permitida\n", yytext);
                return -1;
            }
            strcpy(yylval.id,yytext);
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