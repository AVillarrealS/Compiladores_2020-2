#include "parser.h"
#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"

void E(){
    T();
    while(token == MAS){
        eat(MAS);
        T();
    }
}

void T(){
    F();
    while(token == MUL){
        eat(MUL);
        F();
    }
}

void F(){
    switch (token)
    {
    case LPAR:
        eat(LPAR);
        E();
        eat(RPAR);
        break;
    case ID:
        eat(ID);
        break;
    
    default:
        error();
        break;
    }
}
void eat(int tok){
    if(token==tok)
        token = yylex();
    else
        error();    
}
void error(){
    printf("Error sintáctico\n");
    exit(-1);
}