/*
    D -> D T { L.tipo = T.tipo} L ; | €
    D -> D'
    D'-> T {tipo = T.tipo} L ; D' | €

    T -> int {T.tipo = entero}
        | float {T.tipo = real}

    L -> L1,id | id
    L -> id L'
    L'-> ,id L' | €

Pero por como queda la gramática se puede
resumir en:

    D-> T {tipo = T.tipo} L ; D | €
    T -> int {T.tipo = entero} | float {T.tipo = real}
    L -> {id.tipo = L.tipo} id {L'.tipo=L.tipo} L'
    L'-> , {id.tipo = L.tipo} id {L'.tipo=L.tipo} L' | €
*/
#include <stdio.h>
#include <stdlib.h>
#include "parser_rec_asc.h"
extern int yylex();

void error(){
    printf("Error sintactico\n");
    exit(-1);
}

void decl(){
    if(token == INT || token == FLOAT){
        int tipo = type();
        list(tipo);
        if(token == PYC)
            token = yylex();
        else
            error();
        decl();
    }
}

int type(){
    if(token == INT){
        token = yylex();
        return 4;
    }else 
        if(token == FLOAT){
        return 5;
        }else
            error();  
}

void list(int tipo){
    if(token == ID){
        token = yylex();
        printf("El tipo es %d: \n", tipo);
        listp(tipo);
    }else
        error();
}

void listp(int tipo){
    if(token == COMA){
        token = yylex();
        if(token == ID){
            token = yylex();
            printf("El tipo es %d: \n", tipo);
            listp(tipo);
        }
    }
}