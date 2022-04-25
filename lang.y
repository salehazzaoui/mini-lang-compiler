%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"TS.h"
#include"RS.h"
int yylex();
int yyerror(char *);
extern FILE* yyin;
extern int row, column;
int ntemp=1; char temp[12]=""; 
%}
%union {
    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;
}
%token<id> VARIABLE BODY CONSTANTE IDF AS IDP DOCP SUB OR AND SUP SUPE INF INFE EGA DIF NOT
%token<id> AFF INPUT OUTPUT IF THEN ELSE DO WHILE FOR UNTIL ARRAY
%token<type> INT FLT STR CHR BOL
%token<entier> INTEGER
%token<reel> FLOAT
%token<chaine> CHAR STRING
%token OP CL SCL OCL XLA MIN ADD MUL DIV BAR DP V SFINT SFFLT SFSTR SFCHR SFBOL AFC OPR CPR QU
%left OR
%left AND
%left SUP SUPE INF INFE EGA DIF
%left ADD MIN
%left MUL DIV
%type<NT> exp
%start s
%%

s: start program fin;
start: OP XLA DOCP IDP CL;
fin: OCL DOCP CL;
program: variable constante body | variable body | body;
body: OP BODY CL inst OCL BODY CL;

/*-------------------------------------------------- partie declaration ------------------------------------------------*/
variable: OP SUB VARIABLE CL declare OCL SUB VARIABLE CL ;
declare: OP dec SCL declare 
       | arrays
       ;
arrays: OP ARRAY AS arraysdec OCL ARRAY CL arrays | ;
arraysdec: INT CL OP IDF DP INTEGER SCL {
                                          double_dec(strdup($4)); 
                                          insert_type(strdup($4) ,"variable" , 1, $6);
                                        }
         | FLT CL OP IDF DP INTEGER SCL {
                                          double_dec(strdup($4)); 
                                          insert_type(strdup($4) ,"variable" , 2, $6);
                                        }
         | CHR CL OP IDF DP INTEGER SCL {
                                          double_dec(strdup($4)); 
                                          insert_type(strdup($4) ,"variable" , 3, $6);
                                        }
         ;
dec: IDF AS INT {
                  double_dec(strdup($1)); 
                  insert_type(strdup($1) ,"variable" ,1, 0);
                }
   | IDF AS FLT {
                  double_dec(strdup($1)); 
                  insert_type(strdup($1) ,"variable" ,2, 0);
                }
   | IDF AS CHR {
                  double_dec(strdup($1)); 
                  insert_type(strdup($1) ,"variable" ,3, 0);
                }
   | IDF AS STR {
                  double_dec(strdup($1)); 
                  insert_type(strdup($1) ,"variable" ,4, 0);
                }
   | IDF AS BOL {
                  double_dec(strdup($1)); 
                  insert_type(strdup($1) ,"variable" ,5, 0);
                }
   ;
constante: OP SUB CONSTANTE CL ass OCL SUB CONSTANTE CL ;
ass: OP impl  SCL ass | ;
impl: IDF AFC INTEGER {
                        double_dec(strdup($1)); 
                        insert_type(strdup($1) ,"constante" ,1, 0);
                      }
    | IDF AFC FLOAT   {
                        double_dec(strdup($1));
                        insert_type(strdup($1) ,"constante" ,2, 0);
                      }
    ;
/*-------------------------------------------------- partie instructions ------------------------------------------------*/
inst: affect ;
affect: OP AFF DP IDF V exp SCL affect {
                                        dec($4);
                                        if(typeIdf($4) != $6.type){
                                          yyerror("error semantique uncomptabilite des types \n");
                                        }else{
                                          generer_quad("=", $6.res, " ", $4);
                                        }
                                       }
      | 
      ;
exp: exp ADD exp {
                    if($1.type != $3.type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type=$1.type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("+",$1.res,$3.res,$$.res);
                    }
                  }
   | exp MIN exp {
                    if($1.type != $3.type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type=$1.type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("-",$1.res,$3.res,$$.res);
                    }
                  }
   | exp MUL exp {
                    if($1.type != $3.type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type=$1.type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("*",$1.res,$3.res,$$.res);
                    }
                  }
   | exp DIV exp {
                    if($1.type != $3.type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type=$1.type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("/",$1.res,$3.res,$$.res);
                    }
                  }
   | OPR exp CPR {$$.type=$2.type; $$.res=$2.res;}
   | INTEGER {$$.type = 1; sprintf (temp, "%d",$1); $$.res= strdup(temp);ntemp++; temp[0]='\0';}
   | FLOAT   {$$.type = 2; sprintf (temp, "%f",$1); $$.res= strdup(temp);ntemp++; temp[0]='\0';}
   | IDF     {dec($1); $$.type = typeIdf($1); $$.res = strdup($1);}
   ;
/*input: OP INPUT DP QU signef QU SCL input 
     |
     ;
//incontenu: STRING signef 
signef: IDF SFINT
      | IDF SFFLT
      | IDF SFCHR
      | IDF SFSTR
      | IDF SFBOL
      ;
output: OP OUTPUT DP contate SCL output 
     |
     ;
contate: ;*/

%%
int yyerror (char* msg)
{printf (" %s ligne %d colonne %d \n",msg,row,column); exit (0);return 1;}

int main ()
{ yyin = fopen("in.txt", "r");
init();
yyparse ();
printHashTable();
afficher_quad();
fclose (yyin);
}

