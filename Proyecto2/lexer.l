%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"
%}

id [a-zA-Z_][a-zA-Z_0-9]*
esp [ \n\t\r]+
num [0-9]+
caracter ['][a-zA-Z][']
cadena ["][a-zA-Z]+["]
%%

"estructura" {return PRESTRUCTURA;}
"inicio"     {return PRINICIO;}
"def"        {return PRDEF;}
"fin"        {return PRFIN;}
"ent"        {return PRENTERO;}
"real"       {return PRREAL;}
"car"        {return PRCAR;}
"dreal"      {return PRDREAL;}
"sin"        {return PRSIN;}
"si"         {return PRSI;}
"entonces"   {return PRENTONCES;}
"sino"       {return PRSINO;}
"mientras"   {return PRMIENTRAS;}
"hacer"      {return PRHACER;}
"segun"      {return PRSEGUN;}
"escribir"   {return PRESCRIBIR;}
"leer"       {return PRLEER;}
"devolver"   {return PRDEVOLVER;}
"terminar"   {return PRTERMINAR;}
"caso"       {return PRCASO;}
"pred"       {return PRPRED;}
"||"         {return PROR;}
"&&"         {return PRAND;}
"not"        {return PRNOT;}
"true"       {return PRVERDADERO;}
"false"      {return PRFALSO;}
","          {return COMA;}
";"          {return PYC;}
":"          {return DP;}
":="         {return PIGUAL;}
"."          {return PUNTO;}
"("          {return LPAR;}
")"          {return RPAR;}
"["          {return LCOR;}
"]"          {return RCOR;}
">"          {return MAYOR;}
"<"          {return MENOR;}
"<="         {return MENORIGUAL;}
">="         {return MAYORIGUAL;}
"<>"         {return MAYORMENOR;}
"="          {return IGUAL;}
"+"          {return SUMA;}
"-"          {return RESTA;}
"*"          {return MUL;}
"/"          {return DIV;}
"%"          {return MOD;}

{num}        {
              yylval.val = atoi(yytext);
              return NUM;
              }

{id}         {
              strcpy(yylval.val, yytext); 
              return ID;
              }

{caracter}   {
              strcpy(yylval.val, yytext);
              return CARACTER;
              }

{cadena}     {
              strcpy(yylval.val, yytext); 
              return CADENA;
              }

{esp}        {}
.             {printf("Error Lexico %s\n",yytext);}


%%
int yywrap(){
     return 1;
}
