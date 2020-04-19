
%{
    #include <stdio.h>
%}

%option noyywrap

letra [a-zA-Z]
digito [0-9]
operador_a ("-")|("+")|("!")|("¡")
operador_r ("<<")|(">>")|(">=")|("<=")|("==")|("^")
operador_l ("|")|("°")|("¬")
simbolos [{}();,]
com [^*/]

%%
#{letra}+{digito}* {printf("Encontré un identificador: %s \n", yytext);}
@if {printf("Encontré una palabra reservada: %s \n", yytext);}
@else {printf("Encontré una palabra reservada: %s \n", yytext);}
@while {printf("Encontré una palabra reservada: %s \n", yytext);}
{operador_a}+ {printf("Encontré un(os) operador(es) (aritméticos): %s \n", yytext);}
{operador_r}+ {printf("Encontré un(os) operador(es) (relacionales): %s \n", yytext);}
{operador_l}+ {printf("Encontré un(os) operador(es) (lógico): %s \n", yytext);}
{simbolos}+ {printf("Encontré un(os) simbolo(s) de puntuación: %s \n", yytext);}
= {printf("Encontré un(os) operador(es) (asignación): %s \n", yytext);}
"/*"{com}*"*/" {/*ignorar comentarios*/}
[ \t\n\r]+ {/*ignorar espacios en blando*/}
.   { printf("Error Léxico: %s\n", yytext);}
%%

int main(){
    yylex();
}