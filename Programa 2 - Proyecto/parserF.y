/*
    (Gramática del proyecto...)
*/

/* SECCIÓN DE DECLARACIONES */
%{
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
   
%}

/*%union{
    int tipo;
    char id[32];
}*/

/* Terminales */
%token PRESTRUCTURA
%token PRINICIO
%token PRDEF
%token PRFIN
%token PRENTERO
%token PRREAL
%token PRCAR
%token PRDREAL
%token PRSIN
%token PRSI
%token PRENTONCES
%token PRSINO
%token PRMIENTRAS
%token PRHACER
%token PRSEGUN
%token PRESCRIBIR
%token PRLEER
%token PRDEVOLVER
%token PRTERMINAR
%token PRCASO
%token PRPRED
%token PRVERDADERO
%token PRFALSO
%token COMA
%token PYC
%token DP
%token PIGUAL
%token NUM
%token ID
%token CARACTER
%token CADENA

/* Asignacion */
%right IGUAL
%left PROR
%left PRAND
%left PRNOT
%left MAYOR MENOR MAYORIGUAL MENORIGUAL MAYORMENOR
%left SUMA RESTA
%left MUL DIV MOD
%nonassoc LPAR RPAR LCOR RCOR PUNTO

/* No Terminales */
/* Simbolo inicial */
%start programa

%%
/* SECCIÓN DEL ESQUEMA DE TRADUCCIÓN */

/*1*/
programa : declaraciones funciones ;

/*2*/
declaraciones : tipo lista_var PYC declaraciones 
            | tipo_registro lista_var PYC declaraciones 
            | ;

/*3*/
tipo_registro : PRESTRUCTURA PRINICIO declaraciones PRFIN ;

/*4*/
tipo : base tipo_arreglo ;

/*5*/
base : PRENTERO 
    | PRREAL 
    | PRDREAL 
    | PRCAR 
    | PRSIN ;

/*6*/
tipo_arreglo : LCOR NUM RCOR tipo_arreglo
            | ;

/*7*/
lista_var : lista_var COMA ID
         | ID ;

/*8*/
funciones : PRDEF tipo ID LPAR argumentos RPAR PRINICIO declaraciones sentencias PRFIN funciones
         | ;

/*9*/
argumentos : lista_arg
          | PRSIN ;

/*10*/
lista_arg : lista_arg COMA arg
         | arg ;

/*11*/
arg : tipo_arg ID ;

/*12*/
tipo_arg : base param_arr ;

/*13*/
param_arr : LCOR RCOR param_arr
         | ;

/*14*/
sentencias : sentencias sentencia 
          | sentencia ;

/*15*/
sentencia : PRSI e_bool PRENTONCES sentencia PRFIN
         | PRSI e_bool PRENTONCES sentencia PRSINO sentencia PRFIN
         | PRMIENTRAS e_bool PRHACER sentencia PRFIN
         | PRHACER sentencia PRMIENTRAS e_bool PYC
         | PRSEGUN LPAR variable RPAR PRHACER casos predeterminado PRFIN
         | variable PIGUAL expresion PYC
         | PRESCRIBIR expresion PYC
         | PRLEER variable PYC
         | PRDEVOLVER PYC
         | PRDEVOLVER expresion PYC
         | PRTERMINAR PYC
         | PRINICIO sentencias PRFIN ;

/*16*/
casos : PRCASO NUM DP sentencia casos
     | PRCASO NUM DP sentencia ;

/*17*/
predeterminado : PRPRED DP sentencia
              | ;

/*18*/
e_bool : e_bool PROR e_bool
      | e_bool PRAND e_bool
      | PRNOT e_bool
      | relacional
      | PRVERDADERO
      | PRFALSO ;

/*19*/
relacional : relacional MAYOR relacional
          | relacional MENOR relacional
          | relacional MENORIGUAL relacional
          | relacional MAYORIGUAL relacional
          | relacional MAYORMENOR relacional
          | relacional IGUAL relacional
          | expresion ;

/*20*/
expresion : expresion SUMA expresion
         | expresion RESTA expresion
         | expresion MUL expresion
         | expresion DIV expresion
         | expresion MOD expresion
         | LPAR expresion RPAR
         | variable
         | NUM
         | CADENA
         | CARACTER ;

/*21*/
variable : ID variable_comp ;

/*22*/
variable_comp : dato_est_sim 
             | arreglo 
             | LPAR parametros RPAR ;

/*23*/
dato_est_sim : dato_est_sim PUNTO ID 
            | ;

/*24*/
arreglo : LCOR expresion RCOR
       | arreglo LCOR expresion RCOR ;

/*25*/
parametros : lista_param
          | ;

/*26*/
lista_param : lista_param COMA expresion
           | expresion ;


%%
/* SECCIÓN DE CÓDIGO DE USUARIO */
void yyerror(char *s){
    printf("%s\n", s);
}