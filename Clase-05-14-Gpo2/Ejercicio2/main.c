#include <stdio.h>
#include "parser_rec_asc.h"
extern FILE *yyin;
extern int yylex();

int main(int argc, char** argv){
    FILE *f;
    if (argc < 2){
        printf("Faltan Argumentos...\n");
        return -1;
    }

    f = fopen(argv[1], "r");
    if (!f){
        printf("El archivo %s no se puede abrir...", argv[1]);
        return -1;
    }

    yyin = f;
    token = yylex();
    if(token==0){
        printf("La cadena es aceptada\n");
    }
    decl();
    fclose(yyin);
}