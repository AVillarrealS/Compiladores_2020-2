#ifndef PARSER_H
#define PARSER_H

extern int yylex();
int token; // apuntador del token actual

void E();
void T();
void F();
void eat(int tok);
void error();

#endif