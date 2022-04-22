%{
#include<stdio.h>
#include<string.h>
#include"lang.tab.h"
#include"TS.h"
extern YYSTYPE yylval;
int row=0, column=0;
%}

%option noyywrap

chiffre [0-9]
entier {chiffre}+
reel     {chiffre}+"."{chiffre}*
caractere "'".{1}"'"
idf [a-zA-Z_][a-zA-Z0-9_]*
space ("\t"|" ")+
saut "\n"+

%%
"<"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return OP;}
">"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return CL;}
"/>"           {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SCL;}
"</"           {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return OCL;}
"!"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return XLA;}
"|"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return BAR;}
":"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return DP;}
","            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return V;}
"="            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return AFC;}
"+"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return ADD;}
"-"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return MIN;}
"/"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return DIV;}
"*"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return MUL;}
"$"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SFINT;}
"%"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SFFLT;}
"#"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SFSTR;}
"&"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SFCHR;}
"@"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return SFBOL;}
"("            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return OPR;}
")"            {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return CPR;}
"\""           {column+=yyleng; insert((char*)strdup(yytext), "symbol"); return QU;}


"ID_program"   {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (IDP);}
"docprogram"   {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (DOCP);}
"SUB"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (SUB);}
"VARIABLE"     {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (VARIABLE);}
"CONSTANTE"    {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (CONSTANTE);}
"body"         {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (BODY);}
"AS"           {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (AS);}
"ARRAY"        {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (ARRAY);}
"INT"          {column+=yyleng; yylval.type = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (INT);}
"FLT"          {column+=yyleng; yylval.type = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (FLT);}
"CHR"          {column+=yyleng; yylval.type = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (CHR);}
"STR"          {column+=yyleng; yylval.type = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (STR);}
"BOL"          {column+=yyleng; yylval.type = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (BOL);}
"AND"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (AND);}
"OR"           {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (OR);}
"NOT"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (NOT);}
"SUP"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (SUP);}
"SUPE"         {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (SUPE);}
"INF"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (INF);}
"INFE"         {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (INFE);}
"EGA"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (EGA);}
"DIF"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (DIF);}
"AFF"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (AFF);}
"INPUT"        {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (INPUT);}
"OUTPUT"       {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (OUTPUT);}
"IF"           {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (IF);}
"THEN"         {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (THEN);}
"ELSE"         {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (ELSE);}
"DO"           {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (DO);}
"WHILE"        {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (WHILE);}
"FOR"          {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (FOR);}
"UNTIL"        {column+=yyleng; yylval.id = strdup(yytext) ;insert((char*)strdup(yytext), "keyword"); return (UNTIL);}

{entier}       {column+=yyleng; yylval.entier = atoi(yytext) ;return (INTEGER);}
{reel}         {column+=yyleng; yylval.reel = atof(yytext) ;return (FLOAT);}
{caractere}    {column+=yyleng; yylval.chaine = strdup(yytext) ;return (CHAR);}
'(\\.|''|[^'\n])*' |
\"(\\.|\"\"|[^"\n])*\" {column+=yyleng; yylval.chaine = strdup(yytext);return (STRING);}
{idf}          {column+=yyleng; yylval.id = strdup(yytext) ;return (IDF);}
{space}        {column+=yyleng;}
{saut}         {column=1; row+=yyleng;}
. {printf ("erreur lexicale entite %s ligne %d colonne %d \n",yytext,row,column);}
%%
