%{
#include<stdio.h>
#include<string.h>
#include"lang.tab.h"
#include"TS.h"
extern YYSTYPE yylval;
int row=0, column=0;
%}

%option noyywrap

lettre  [a-zA-Z]
chiffre [0-9]
entier  {chiffre}+
reel    {chiffre}+"."{chiffre}*
caractere "'".{1}"'"
idf     {lettre}({lettre}|{chiffre})*("_"({lettre}|{chiffre})+)*
space   ("\t"|" ")+
saut    "\n"+

/*insert((char*)strdup(yytext), "symbol");*/
/*insert((char*)strdup(yytext), "keyword");*/
%%

"<"            {column+=yyleng;  return OP;}
">"            {column+=yyleng;  return CL;}
"/>"           {column+=yyleng;  return SCL;}
"</"           {column+=yyleng;  return OCL;}
"!"            {column+=yyleng;  return XLA;}
"|"            {column+=yyleng;  return BAR;}
":"            {column+=yyleng;  return DP;}
","            {column+=yyleng;  return V;}
"="            {column+=yyleng;  return AFC;}
"+"            {column+=yyleng;  return ADD;}
"-"            {column+=yyleng;  return MIN;}
"/"            {column+=yyleng;  return DIV;}
"*"            {column+=yyleng;  return MUL;}
"$"            {column+=yyleng;  return SFINT;}
"%"            {column+=yyleng;  return SFFLT;}
"#"            {column+=yyleng;  return SFSTR;}
"&"            {column+=yyleng;  return SFCHR;}
"@"            {column+=yyleng;  return SFBOL;}
"("            {column+=yyleng;  return OPR;}
")"            {column+=yyleng;  return CPR;}
"\""           {column+=yyleng;  return QU;}
";"            {column+=yyleng;  return PV;}



"ID_program"   {column+=yyleng; yylval.id = strdup(yytext) ; return (IDP);}
"docprogram"   {column+=yyleng; yylval.id = strdup(yytext) ; return (DOCP);}
"SUB"          {column+=yyleng; yylval.id = strdup(yytext) ; return (SUB);}
"VARIABLE"     {column+=yyleng; yylval.id = strdup(yytext) ; return (VARIABLE);}
"CONSTANTE"    {column+=yyleng; yylval.id = strdup(yytext) ; return (CONSTANTE);}
"body"         {column+=yyleng; yylval.id = strdup(yytext) ; return (BODY);}
"AS"           {column+=yyleng; yylval.id = strdup(yytext) ; return (AS);}
"ARRAY"        {column+=yyleng; yylval.id = strdup(yytext) ; return (ARRAY);}
"INT"          {column+=yyleng; yylval.type = strdup(yytext) ; return (INT);}
"FLT"          {column+=yyleng; yylval.type = strdup(yytext) ; return (FLT);}
"CHR"          {column+=yyleng; yylval.type = strdup(yytext) ; return (CHR);}
"STR"          {column+=yyleng; yylval.type = strdup(yytext) ; return (STR);}
"BOL"          {column+=yyleng; yylval.type = strdup(yytext) ; return (BOL);}
"AND"          {column+=yyleng; yylval.id = strdup(yytext) ; return (AND);}
"OR"           {column+=yyleng; yylval.id = strdup(yytext) ; return (OR);}
"NOT"          {column+=yyleng; yylval.id = strdup(yytext) ; return (NOT);}
"SUP"          {column+=yyleng; yylval.id = strdup(yytext) ; return (SUP);}
"SUPE"         {column+=yyleng; yylval.id = strdup(yytext) ; return (SUPE);}
"INF"          {column+=yyleng; yylval.id = strdup(yytext) ; return (INF);}
"INFE"         {column+=yyleng; yylval.id = strdup(yytext) ; return (INFE);}
"EGA"          {column+=yyleng; yylval.id = strdup(yytext) ; return (EGA);}
"DIF"          {column+=yyleng; yylval.id = strdup(yytext) ; return (DIF);}
"AFF"          {column+=yyleng; yylval.id = strdup(yytext) ; return (AFF);}
"INPUT"        {column+=yyleng; yylval.id = strdup(yytext) ; return (INPUT);}
"OUTPUT"       {column+=yyleng; yylval.id = strdup(yytext) ; return (OUTPUT);}
"IF"           {column+=yyleng; yylval.id = strdup(yytext) ; return (IF);}
"THEN"         {column+=yyleng; yylval.id = strdup(yytext) ; return (THEN);}
"ELSE"         {column+=yyleng; yylval.id = strdup(yytext) ; return (ELSE);}
"DO"           {column+=yyleng; yylval.id = strdup(yytext) ; return (DO);}
"WHILE"        {column+=yyleng; yylval.id = strdup(yytext) ; return (WHILE);}
"FOR"          {column+=yyleng; yylval.id = strdup(yytext) ; return (FOR);}
"UNTIL"        {column+=yyleng; yylval.id = strdup(yytext) ; return (UNTIL);}

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
