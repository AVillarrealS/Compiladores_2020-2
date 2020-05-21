
%{
    #include <stdio.h>
    using namespace std;
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
#{letra}+{digito}* {printf("Encontre un identificador: %s \n", yytext);}
@if {printf("Encontre una palabra reservada: %s \n", yytext);}
@else {printf("Encontre una palabra reservada: %s \n", yytext);}
@while {printf("Encontre una palabra reservada: %s \n", yytext);}
{operador_a}+ {printf("Encontre un(os) operador(es) (aritmeticos): %s \n", yytext);}
{operador_r}+ {printf("Encontre un(os) operador(es) (relacionales): %s \n", yytext);}
{operador_l}+ {printf("Encontre un(os) operador(es) (logico): %s \n", yytext);}
{simbolos}+ {printf("Encontre un(os) simbolo(s) de puntuacion: %s \n", yytext);}
= {printf("Encontre un(os) operador(es) (asignacion): %s \n", yytext);}
"/*"{com}*"*/" {/*ignorar comentarios*/}
[ \t\n\r]+ {/*ignorar espacios en blanco*/}
.   { printf("Error Lexico: %s\n", yytext);}
%%

int main(){
    locale::global(locale("spanish"));
    yylex();
}