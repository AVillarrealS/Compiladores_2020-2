#ifndef PARSER_REC_ASC_H
#define PARSER_REC_ASC_H

#define ID 1 
#define COMA 2
#define PYC 3
#define INT 4
#define FLOAT 5

int token;

void error();
void decl();
int type();
void list(int);
void listp(int);

#endif