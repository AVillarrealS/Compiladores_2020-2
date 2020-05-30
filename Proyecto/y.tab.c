/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 7 "parser.y"
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
   
#line 26 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define PRESTRUCTURA 257
#define PRINICIO 258
#define PRDEF 259
#define PRFIN 260
#define PRENTERO 261
#define PRREAL 262
#define PRCAR 263
#define PRDREAL 264
#define PRSIN 265
#define PRSI 266
#define PRENTONCES 267
#define PRSINO 268
#define PRMIENTRAS 269
#define PRHACER 270
#define PRSEGUN 271
#define PRESCRIBIR 272
#define PRLEER 273
#define PRDEVOLVER 274
#define PRTERMINAR 275
#define PRCASO 276
#define PRPRED 277
#define PRVERDADERO 278
#define PRFALSO 279
#define COMA 280
#define PYC 281
#define DP 282
#define PIGUAL 283
#define NUM 284
#define ID 285
#define CARACTER 286
#define CADENA 287
#define IGUAL 288
#define PROR 289
#define PRAND 290
#define PRNOT 291
#define MAYOR 292
#define MENOR 293
#define MAYORIGUAL 294
#define MENORIGUAL 295
#define MAYORMENOR 296
#define SUMA 297
#define RESTA 298
#define MUL 299
#define DIV 300
#define MOD 301
#define LPAR 302
#define RPAR 303
#define LCOR 304
#define RCOR 305
#define PUNTO 306
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    5,    3,    6,    6,    6,    6,
    6,    7,    7,    4,    8,    8,    2,    2,    9,    9,
   11,   11,   12,   13,   14,   14,   10,   10,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   18,   18,   19,   19,   16,   16,   16,   16,   16,   16,
   21,   21,   21,   21,   21,   21,   21,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   17,   22,   22,
   22,   23,   23,   24,   24,   25,   25,   26,   26,
};
static const YYINT yylen[] = {                            2,
    2,    4,    4,    0,    4,    2,    1,    1,    1,    1,
    1,    4,    0,    2,    3,    0,   11,    0,    1,    1,
    3,    1,    2,    2,    3,    0,    2,    1,    5,    7,
    5,    5,    8,    4,    3,    3,    2,    3,    2,    3,
    5,    4,    3,    0,    3,    3,    2,    1,    1,    1,
    3,    3,    3,    3,    3,    3,    1,    3,    3,    3,
    3,    3,    3,    1,    1,    1,    1,    2,    1,    1,
    3,    3,    0,    3,    4,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    7,    8,   10,    9,   11,    0,    0,    0,    0,
    0,    0,    0,    1,    0,    0,    0,    0,    6,    0,
    0,    0,   14,    0,    0,    0,    5,    0,    0,    2,
    3,    0,    0,   15,   12,    0,    0,    0,    0,   22,
    0,    0,   24,    0,    0,   23,    0,    0,   21,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   28,    0,    0,   49,   50,   65,   67,   66,
    0,    0,    0,   64,    0,    0,    0,    0,    0,    0,
    0,   37,    0,   39,    0,    0,   68,    0,    0,    0,
   27,    0,   40,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   35,   36,   38,    0,    0,    0,    0,    0,
    0,   17,    0,   63,    0,    0,   46,    0,    0,   60,
   61,   62,    0,   51,   52,   54,   53,   55,    0,    0,
    0,   71,    0,   74,   72,    0,   34,   29,    0,   31,
   32,    0,    0,   75,    0,    0,    0,   30,    0,    0,
    0,    0,    0,   33,    0,   43,   41,
};
static const YYINT yydgoto[] = {                          7,
    8,   14,    9,   16,   10,   11,   19,   23,   38,   62,
   39,   40,   41,   43,   63,   73,   74,  157,  161,   75,
   76,   87,   88,   89,  117,  118,
};
static const YYINT yysindex[] = {                      -119,
 -205,    0,    0,    0,    0,    0,    0, -247, -221, -221,
 -257, -119,  114,    0, -192, -209, -189, -195,    0, -159,
 -168, -153,    0, -119, -119, -156,    0, -151, -192,    0,
    0, -257,  126,    0,    0,    0, -152, -150, -126,    0,
 -127, -136,    0,  -83,  114,    0, -152, -119,    0,    0,
   58,   58,   78,   78,   58, -120, -181, -109, -211,  -98,
 -190,  -17,    0,  -97,   40,    0,    0,    0,    0,    0,
   78, -181, -250,    0,   95, -115, -228,  -81, -109,  -16,
  -92,    0,   20,    0, -181, -181,    0, -116, -113, -247,
    0, -181,    0,    0,   38,   58,   78,   78, -181, -181,
 -181, -181, -181, -181, -181, -181, -181, -181, -181,   58,
   78, -108,    0,    0,    0,   95,  -93,  -74,  -85,  -68,
 -181,    0,   73,    0, -238,  -72,    0, -160, -160,    0,
    0,    0, -115,    0,    0,    0,    0,    0,  -41, -191,
  -30,    0, -181,    0,    0,  -73,    0,    0,   58,    0,
    0,  -53,   95,    0,  -18,  -39,  -29,    0,  -35,  -32,
   -9,   58,   58,    0,  -53,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,  263,    0,    0,
  -21,   17,    0,    0,   -3,    0,    0,    0,    0,    0,
    0,    0,    0,    1,    1,    0,    0,    0,   -3,    0,
    0,  -21,    0,    0,    0, -208,    5,    0,   -4,    0,
    0,    0,    0,    0,    0,    0,    5,   76,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -170,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -210, -261,    0,    0,    0,    0,
    0,    0,    0,    0,    4,    0,    0, -133,  -96,  263,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -267,    0,   19,    0,    0,
    0,    0,    0,    0,    0, -233,    0,  -59,   -1,    0,
    0,    0, -246,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -249,    0,    0,    0,   43,    0,    0,    0,
    0,    0,    0,    0, -244,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    2,  215,  295,  313,    0,   48,  294,  311,    0,  292,
    0,  307,    0,  306,  -55,  -52,  -47,  190,    0,  -34,
  277,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 396
static const YYINT yytable[] = {                         78,
    4,   77,    4,   64,   64,   48,   91,   64,   48,   91,
   81,   13,   79,   20,   64,   42,   96,   64,   94,   48,
   56,  148,   80,   56,   83,   30,   31,   48,   48,  149,
   78,  112,   42,   45,   56,   79,   45,   95,   97,   98,
  125,  110,   56,   56,  126,  127,   18,   45,   64,   51,
  116,  119,   12,   78,  139,   45,   57,  123,  140,   57,
   97,   98,   64,   15,  128,  129,  130,  131,  132,   82,
   57,   24,   68,   61,   69,   70,   11,   57,   57,   57,
   37,   57,   57,   57,   57,   57,  146,   22,   26,  151,
   72,   25,   37,  155,   20,   11,   73,   97,   98,   73,
   27,   64,   68,   61,   69,   70,  165,  166,  153,   73,
   73,   85,   73,   86,   64,   64,   28,   73,   73,   73,
   72,   73,   73,   73,   73,   73,   73,   73,   73,   73,
   73,   29,   73,   69,   73,   73,   69,    1,  101,  102,
  103,    2,    3,    4,    5,    6,   69,   69,   32,   69,
   33,   42,   44,   45,   69,   69,   69,   46,   69,   69,
   69,   69,   69,   69,   69,   69,   69,   69,   47,   69,
   70,   69,  104,   70,   48,   61,  105,  106,  107,  108,
  109,   79,   84,   70,   70,   92,   70,  111,  114,  120,
  121,   70,   70,   70,  141,   70,   70,   70,   70,   70,
   70,   70,   70,   70,   70,  143,   70,   58,   70,  142,
   58,   99,  100,  101,  102,  103,  145,   98,  150,  144,
   58,   58,  156,   99,  100,  101,  102,  103,   58,   58,
   58,  154,   58,   58,   58,   58,   58,   58,   58,  152,
   52,  158,   90,   58,  159,   58,  162,  160,   53,  163,
  164,   54,   55,   56,   57,   58,   59,   60,    4,    4,
    4,    4,   18,   13,  113,   59,    4,   61,   59,    4,
    4,    4,    4,    4,    4,    4,    4,   16,   59,   59,
   99,  100,  101,  102,  103,    4,   59,   59,   59,   26,
   59,   59,   59,   59,   59,   59,   59,   52,   19,   93,
  115,   59,   44,   59,  122,   53,   77,   21,   54,   55,
   56,   57,   58,   59,   60,   52,   99,  100,  101,  102,
  103,   76,   17,   53,   61,   35,   54,   55,   56,   57,
   58,   59,   60,    4,   99,  100,  101,  102,  103,   34,
  124,    4,   61,   65,    4,    4,    4,    4,    4,    4,
    4,   49,   50,  147,  167,   66,   67,    0,    0,    0,
    4,   68,   61,   69,   70,    0,    0,    0,   71,   99,
  100,  101,  102,  103,    2,    3,    4,    5,    6,   72,
  133,  134,  135,  136,  137,  138,    2,    3,    4,    5,
   36,   99,  100,  101,  102,  103,
};
static const YYINT yycheck[] = {                         55,
    0,   54,    0,   51,   52,  267,   62,   55,  270,   65,
   58,  259,  280,   12,   62,  260,  267,   65,   71,  281,
  267,  260,   57,  270,   59,   24,   25,  289,  290,  268,
  280,   79,  277,  267,  281,  303,  270,   72,  289,  290,
   96,  270,  289,  290,   97,   98,  304,  281,   96,   48,
   85,   86,  258,  303,  110,  289,  267,   92,  111,  270,
  289,  290,  110,  285,   99,  100,  101,  102,  103,  281,
  281,  281,  284,  285,  286,  287,  285,  288,  289,  290,
   33,  292,  293,  294,  295,  296,  121,  280,  284,  281,
  302,  281,   45,  149,  303,  304,  267,  289,  290,  270,
  260,  149,  284,  285,  286,  287,  162,  163,  143,  280,
  281,  302,  283,  304,  162,  163,  285,  288,  289,  290,
  302,  292,  293,  294,  295,  296,  297,  298,  299,  300,
  301,  285,  303,  267,  305,  306,  270,  257,  299,  300,
  301,  261,  262,  263,  264,  265,  280,  281,  305,  283,
  302,  304,  303,  280,  288,  289,  290,  285,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  301,  305,  303,
  267,  305,  288,  270,  258,  285,  292,  293,  294,  295,
  296,  302,  281,  280,  281,  283,  283,  269,  281,  306,
  304,  288,  289,  290,  303,  292,  293,  294,  295,  296,
  297,  298,  299,  300,  301,  280,  303,  267,  305,  303,
  270,  297,  298,  299,  300,  301,  285,  290,  260,  305,
  280,  281,  276,  297,  298,  299,  300,  301,  288,  289,
  290,  305,  292,  293,  294,  295,  296,  297,  298,  270,
  258,  260,  260,  303,  284,  305,  282,  277,  266,  282,
  260,  269,  270,  271,  272,  273,  274,  275,  258,  259,
  260,  259,    0,  285,  281,  267,  266,  285,  270,  269,
  270,  271,  272,  273,  274,  275,  260,  281,  280,  281,
  297,  298,  299,  300,  301,  285,  288,  289,  290,  285,
  292,  293,  294,  295,  296,  297,  298,  258,  303,  260,
  281,  303,  260,  305,   90,  266,  303,   13,  269,  270,
  271,  272,  273,  274,  275,  258,  297,  298,  299,  300,
  301,  303,   10,  266,  285,   32,  269,  270,  271,  272,
  273,  274,  275,  258,  297,  298,  299,  300,  301,   29,
  303,  266,  285,   52,  269,  270,  271,  272,  273,  274,
  275,   45,   47,  281,  165,  278,  279,   -1,   -1,   -1,
  285,  284,  285,  286,  287,   -1,   -1,   -1,  291,  297,
  298,  299,  300,  301,  261,  262,  263,  264,  265,  302,
  104,  105,  106,  107,  108,  109,  261,  262,  263,  264,
  265,  297,  298,  299,  300,  301,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 306
#define YYUNDFTOKEN 335
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PRESTRUCTURA","PRINICIO","PRDEF",
"PRFIN","PRENTERO","PRREAL","PRCAR","PRDREAL","PRSIN","PRSI","PRENTONCES",
"PRSINO","PRMIENTRAS","PRHACER","PRSEGUN","PRESCRIBIR","PRLEER","PRDEVOLVER",
"PRTERMINAR","PRCASO","PRPRED","PRVERDADERO","PRFALSO","COMA","PYC","DP",
"PIGUAL","NUM","ID","CARACTER","CADENA","IGUAL","PROR","PRAND","PRNOT","MAYOR",
"MENOR","MAYORIGUAL","MENORIGUAL","MAYORMENOR","SUMA","RESTA","MUL","DIV","MOD",
"LPAR","RPAR","LCOR","RCOR","PUNTO",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"programa : declaraciones funciones",
"declaraciones : tipo lista_var PYC declaraciones",
"declaraciones : tipo_registro lista_var PYC declaraciones",
"declaraciones :",
"tipo_registro : PRESTRUCTURA PRINICIO declaraciones PRFIN",
"tipo : base tipo_arreglo",
"base : PRENTERO",
"base : PRREAL",
"base : PRDREAL",
"base : PRCAR",
"base : PRSIN",
"tipo_arreglo : LCOR NUM RCOR tipo_arreglo",
"tipo_arreglo :",
"lista_var : ID lista_var1",
"lista_var1 : COMA ID lista_var1",
"lista_var1 :",
"funciones : PRDEF tipo ID LPAR argumentos RPAR PRINICIO declaraciones sentencias PRFIN funciones",
"funciones :",
"argumentos : lista_arg",
"argumentos : PRSIN",
"lista_arg : lista_arg COMA arg",
"lista_arg : arg",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : LCOR RCOR param_arr",
"param_arr :",
"sentencias : sentencias sentencia",
"sentencias : sentencia",
"sentencia : PRSI e_bool PRENTONCES sentencia PRFIN",
"sentencia : PRSI e_bool PRENTONCES sentencia PRSINO sentencia PRFIN",
"sentencia : PRMIENTRAS e_bool PRHACER sentencia PRFIN",
"sentencia : PRHACER sentencia PRMIENTRAS e_bool PYC",
"sentencia : PRSEGUN LPAR variable RPAR PRHACER casos predeterminado PRFIN",
"sentencia : variable PIGUAL expresion PYC",
"sentencia : PRESCRIBIR expresion PYC",
"sentencia : PRLEER variable PYC",
"sentencia : PRDEVOLVER PYC",
"sentencia : PRDEVOLVER expresion PYC",
"sentencia : PRTERMINAR PYC",
"sentencia : PRINICIO sentencias PRFIN",
"casos : PRCASO NUM DP sentencia casos",
"casos : PRCASO NUM DP sentencia",
"predeterminado : PRPRED DP sentencia",
"predeterminado :",
"e_bool : e_bool PROR e_bool",
"e_bool : e_bool PRAND e_bool",
"e_bool : PRNOT e_bool",
"e_bool : relacional",
"e_bool : PRVERDADERO",
"e_bool : PRFALSO",
"relacional : relacional MAYOR relacional",
"relacional : relacional MENOR relacional",
"relacional : relacional MENORIGUAL relacional",
"relacional : relacional MAYORIGUAL relacional",
"relacional : relacional MAYORMENOR relacional",
"relacional : relacional IGUAL relacional",
"relacional : expresion",
"expresion : expresion SUMA expresion",
"expresion : expresion RESTA expresion",
"expresion : expresion MUL expresion",
"expresion : expresion DIV expresion",
"expresion : expresion MOD expresion",
"expresion : LPAR expresion RPAR",
"expresion : variable",
"expresion : NUM",
"expresion : CADENA",
"expresion : CARACTER",
"variable : ID variable_comp",
"variable_comp : dato_est_sim",
"variable_comp : arreglo",
"variable_comp : LPAR parametros RPAR",
"dato_est_sim : dato_est_sim PUNTO ID",
"dato_est_sim :",
"arreglo : LCOR expresion RCOR",
"arreglo : arreglo LCOR expresion RCOR",
"parametros : lista_param",
"parametros :",
"lista_param : lista_param COMA expresion",
"lista_param : expresion",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 205 "parser.y"
/* SECCIÓN DE CÓDIGO DE USUARIO */
void yyerror(char *s){
    printf("%s\n", s);
}
#line 437 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
