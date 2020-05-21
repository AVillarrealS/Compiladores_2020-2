/*
    L -> E\n {L.val = E.val}
    E -> E1 + T {E.val = E1.val + T.val}
         | T {E.val = T.val}
    T -> T1 * F {T.val = T1.val * F.val}
         | F {T.val = F.val}
    F -> (E) {F.val = E.val}
         | numero {F.val = numero.val}
*/

/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
%}

%union{
    int val;
}

/* Terminales(en orden)= {+,*,(,),numero,\n} */
%token SL //salto de linea
%token<val> NUMERO
/* %left, %right, %nonassoc */
%left MAS
%left MUL
%nonassoc LPAR RPAR

/* No Terminales= {L,E,T,F}
   Les damos un nombre a cada uno...
   L = line
   E = exp
   T = term
   F = factor 
   Sino tienen asociación, no es necesario */
%type<val> line exp term factor
/* L es el encabezado */
%start line


%%
/* SECCIÓN DEL ESQUEMA DE TRADUCCIÓN */
/* L -> E\n {L.val = E.val} */
/* $$  $1 $2       $3       */
line : exp SL { $$ = $1; 
                printf("El valor de la operacion es: %d\n", $$);
              };


/* E -> E1 + T {E.val = E1.val + T.val}
         | T {E.val = T.val} */
/* $$  $1 $2 $3        $4            */
/*        $1         $2              */ //Reinicia contandor
exp : exp MAS term { $$ = $1 + $3; }
      | term { $$ = $1; };


/* T -> T1 * F {T.val = T1.val * F.val}
         | F {T.val = F.val} */
/* $$  $1 $2 $3        $4             */
/*         $1        $2               */
term : term MUL factor { $$ = $1 * $3; }
       | factor { $$ = $1; };


/* F -> (E) {F.val = E.val}
         | numero {F.val = numero.val} */
/* $$  $1 $2 $3    $4                  */
/*            $1         $2            */
factor : LPAR exp RPAR { $$ = $2; }
         | NUMERO { $$ = $1; };


%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
void yyerror(char *s){
    printf("%s\n", s);
}