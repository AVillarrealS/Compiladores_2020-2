/*
    D -> T {tipo = T.tipo} L
    T -> int {T.tipo = entero}
        | float {T.tipo = real}
    L -> L1,id
        | id

Esa es la gramática original,
vamos a trabajar con una un poco distinta
*/

/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
    int tipo;
    //tipo = 0, tipo es entero
    //tipo = 1, tipo es flotante
%}

%union{
    int tipo;
    char id[32];
}

/* Terminales(en orden)= {int,float, , ,id} */
/* agregamos= {;} */
%token COMA PYC
%token<id> ID 
%token INT FLOAT

/* No Terminales= {D,T,L}
   Les damos un nombre a cada uno...
   T = type
   D = decl 
   L = list
   Sino tienen asociación, no es necesario 
   a D se le da nombre por ser inicial en la gramática */
%type<tipo> type
/* D es el encabezado */
%start decl

%%
/* SECCIÓN DEL ESQUEMA DE TRADUCCIÓN */
/*
    D -> D T {tipo = T.tipo} L ; | €
    T -> int {T.tipo = entero}
        | float {T.tipo = real}
    L -> L1 , id | id
*/
decl : decl type { tipo = $2; } list PYC | ;
type : INT { $$ = 0; } | FLOAT { $$ = 1; };
list : list COMA ID { printf("El tipo de %s es: %d\n", $3, tipo); }
      | ID { printf("El tipo de %s es: %d\n", $1, tipo); };

%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
void yyerror(char *s){
    printf("%s\n", s);
}