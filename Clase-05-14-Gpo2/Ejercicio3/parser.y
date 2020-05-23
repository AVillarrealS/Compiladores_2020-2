/*
    S -> id = E ;
    E -> E1 + T
    E -> T
    T -> T1 * F
    T -> F
    F -> (E)
    F -> num
    F -> id
*/

/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
    char *newTemp();
    int temp=0;
%}

%union{
    char dir[32];
}

%token<dir> ID
%token<dir> NUMERO
/* %left, %right, %nonassoc */
%token PYC
%left ASIG
%left MAS
%left MUL
%nonassoc LPAR RPAR


%type<dir> exp term factor
%start sentencia


%%
/* SECCIÓN DEL ESQUEMA DE TRADUCCIÓN */
sentencia : ID ASIG exp PYC;

exp : exp MAS term {
        strcpy($$, newTemp());
        printf("%s = %s + %s\n", $$, $1, $3);
    }
    | term { $$ = $1; };

term : term MUL factor {
        strcpy($$, newTemp());
        printf("%s = %s + %s\n", $$, $1, $3);
    }
    | factor { $$ = $1; };

factor : LPAR exp RPAR { $$ = $2; }
    | NUMERO { $$ = $1; }
    | ID { $$ = $1; };

%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
void yyerror(char *s){
    printf("%s\n", s);
}

char *newTemp(){
    char strtemp[32];
    sprintf(strtemp,"t%d",temp++);
    return strtemp;
}