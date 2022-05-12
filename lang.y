%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"TS.h"
#include"RS.h"
#include"Quad.h"
int yylex();
int yyerror(char *);
extern FILE* yyin;
extern int row, column;
int ntemp=1; char temp[12]=""; 
int arrayType, if_BZ;
%}
%union {
    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;
}
%token<id> VARIABLE BODY CONSTANTE IDF AS IDP DOCP SUB
%token<id> AFF INPUT OUTPUT IF THEN ELSE DO WHILE FOR UNTIL ARRAY
%token<type> INT FLT STR CHR BOL
%token<entier> INTEGER
%token<reel> FLOAT
%token<chaine> CHAR STRING
%token<NT> OR AND SUP SUPE INF INFE EGA DIF NOT
%token OP CL SCL OCL XLA MIN ADD MUL DIV BAR DP V SFINT SFFLT SFSTR SFCHR SFBOL AFC OPR CPR QU
%left OR
%left AND
%left SUP SUPE INF INFE EGA DIF
%left ADD MIN
%left MUL DIV
%type<NT> exp exp_log
%start s
%%

s: start program fin;
start: OP XLA DOCP IDP CL;
fin: OCL DOCP CL;
program: variable constante body | variable body | body;
body: OP BODY CL inst_list OCL BODY CL;

/*-------------------------------------------------- partie declaration ------------------------------------------------*/
variable: OP SUB VARIABLE CL declare OCL SUB VARIABLE CL ;
declare: OP dec SCL declare 
       | arrays
       ;
arrays: OP ARRAY AS arraytype CL arraysdec OCL ARRAY CL arrays | ;
arraytype: INT {arrayType = 1;}
         | FLT {arrayType = 2;}
         | CHR {arrayType = 3;}
         ;
arraysdec: OP IDF DP INTEGER SCL arraysdec  {
                                              double_dec(strdup($2)); 
                                              insert_type(strdup($2) ,"variable" , arrayType, $4);
                                            }
         |
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
                        sprintf (temp, "%d",$3);
                        generer_quad("=", temp, " ", $1);
                        ntemp++; temp[0]='\0';
                      }
    | IDF AFC FLOAT   {
                        double_dec(strdup($1));
                        insert_type(strdup($1) ,"constante" ,2, 0);
                        sprintf (temp, "%f",$3);
                        generer_quad("=", temp, " ", $1);
                        ntemp++; temp[0]='\0';
                      }
    ;
/*-------------------------------------------------- partie instructions ------------------------------------------------*/
inst_list: inst_list inst
         | inst
         ;
inst: affect | condition | for | while | input | output ;
/*-------------------------------------------------  Partie affectation -------------------------------------------------------------*/
affect: OP AFF DP IDF V exp SCL    {
                                        dec($4);
                                        check_constante($4);
                                        if(typeIdf($4) != $6.type){
                                          yyerror("error semantique uncomptabilite des types \n");
                                        }else{
                                          generer_quad("=", $6.res, " ", $4);
                                        }
                                    } 
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

/*--------------------------------------------- Partie I/O ------------------------------------------------*/
input: OP INPUT DP IDF STRING SCL {
                                    dec($4);
                                    printf("la string est : %s \n", $5);
                                    if(strstr($5, "$") != NULL){
                                      printf("Elle inclued dollar \n");
                                    }
                                    if(strstr($5, "%") != NULL){
                                      printf("Elle inclued porsontage \n");
                                    }
                                    if(strstr($5, "#") != NULL){
                                      printf("Elle inclued dyaz \n");
                                    }
                                    if(strstr($5, "&") != NULL){
                                      printf("Elle inclued and \n");
                                    }
                                    if(strstr($5, "@") != NULL){
                                      printf("Elle inclued arobast \n");
                                    }
                                  };

output: OP OUTPUT DP content_out SCL ;
content_out: STRING ADD IDF addition_idf | STRING
           ;
addition_idf: ADD STRING addition_idf | ADD STRING ADD IDF addition_idf | ;

/*--------------------------------------------- Partie IF ------------------------------------------------*/
/*
! condition: OP IF DP exp_log CL OP THEN CL inst_list OCL THEN CL OP ELSE CL inst_list OCL ELSE CL OCL IF CL;

*condition: A inst_list OCL ELSE CL OCL IF CL;
*A: B inst_list OCL THEN CL OP ELSE ;
*B: OP IF DP exp_log CL OP THEN CL;

*/
condition: OP IF DP exp_log CL then else OCL IF CL {
                                           if_BZ = qc;
                                           printf("if_bz = %d \n", if_BZ);
                                           generer_quad("BZ", " ", " ", " ");
                                        }
         ; 
then: OP THEN CL inst_list OCL THEN CL {
                                         printf("qcThen = %d \n", qc);
                                         sprintf(temp, "%d", qc);
                                         strcpy(quad[if_BZ].res, temp);
                                         printf("quad = %s \n", quad[if_BZ].oper);
                                         //qc++;
                                         temp[0] ='\0';
                                       } 
    ;
else: OP ELSE CL inst_list OCL ELSE CL {
                                         printf("qcElse = %d \n", qc);
                                         //qc++;
                                       } 
    |
    ;
/*--------------------------------------------- Partie opération logique ------------------------------------------------*/
exp_log: exp {$$.res = $1.res}
       | AND OPR exp_log V exp_log CPR {
                                           sprintf(temp, "%d", qc+4);
                                           generer_quad("BZ", " ", $3.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                        }
       | OR OPR exp_log V exp_log CPR {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", $3.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                           sprintf(temp, "%d", qc+4);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc-2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                        }
       | NOT OPR exp_log CPR            {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", $3.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | SUP OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGT", temp, $$.res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | INF OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLT", temp, $$.res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | SUPE OPR exp_log V exp_log CPR {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGE", temp, $$.res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | INFE OPR exp_log V exp_log CPR {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLE", temp, $$.res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | EGA OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        } 
       | DIF OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", $3.res, $5.res, $$.res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BNZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", $$.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        } 
       ;
/*--------------------------------------------- Partie FOR ------------------------------------------------*/
for: OP FOR IDF AFC INTEGER UNTIL IDF CL inst_list OCL FOR CL ;

/*--------------------------------------------- Partie WHILE ------------------------------------------------*/
while: OP DO CL inst_list OP WHILE DP exp_log SCL OCL DO CL ;

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

