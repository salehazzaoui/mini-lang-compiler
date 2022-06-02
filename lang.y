%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"TS.h"
#include"RS.h"
#include"Quad.h"
#include"asm.h"
int yylex();
int yyerror(char *);
extern FILE* yyin;
extern int row, column;
int ntemp=1; char temp[12]=""; 
int arrayType, typeV, typeC, if_BZ = 0, if_BR=0, for_BZ = 0, while_BZ=0;
int varType;
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
%token OP CL SCL OCL XLA MIN ADD MUL DIV BAR DP V PV SFINT SFFLT SFSTR SFCHR SFBOL AFC OPR CPR QU
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

/*-------------------------------------------------- partie SUB VARIABLE ------------------------------------------------*/
variable: OP SUB VARIABLE CL declare OCL SUB VARIABLE CL ;
declare: OP dec SCL PV declare 
       | arrays
       ;
/****************************************Declaration variable*****************************************/
dec: IDF listV {double_dec(strdup($1));insert_type(strdup($1) ,"variable" ,typeV, 0);}
    
listV: BAR IDF listV  {double_dec(strdup($2)); insert_type(strdup($2) ,"variable" ,typeV, 0);}
      |TypeVar
      ;
TypeVar: AS INT {typeV=1;}
        |AS FLT {typeV=2;}
        |AS CHR {typeV=3;}
        |AS STR {typeV=4;}
        |AS BOL {typeV=5;}
        ;

/*****************************************Declaration ARRAY***********************************************/
arrays: OP ARRAY AS arraytype CL arraysdec OCL ARRAY CL arrays | ;
arraytype: INT {arrayType = 1;}
         | FLT {arrayType = 2;}
         | CHR {arrayType = 3;}
         | STR {arrayType = 4;}
         | BOL {arrayType = 5;}
         ;
arraysdec: OP IDF DP INTEGER SCL arraysdec  
            {
              double_dec(strdup($2)); 
              insert_type(strdup($2) ,"variable" , arrayType, $4);
            }
         |
         ;

/*************************Declaration Constante***************************/
constante: OP SUB CONSTANTE CL ass OCL SUB CONSTANTE CL ;
ass: OP impl  SCL PV ass | OP decC SCL PV ass | ;
/**********AFectation Constante***********/
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

/**********DEC Multiple Constante*************/
decC: IDF listC {double_dec(strdup($1));insert_type(strdup($1) ,"constante" ,typeC, 0);}
    
listC: BAR IDF listC  {double_dec(strdup($2)); insert_type(strdup($2) ,"constante" ,typeC, 0);}
      |TypeCon
      ;
TypeCon: AS INT {typeC=1;}
        |AS FLT {typeC=2;}
        |AS CHR {typeC=3;}
        |AS STR {typeC=4;}
        |AS BOL {typeC=5;}
        ;

/*------------------------------------------Fin partie SUB VARIABLE ------------------------------------------------*/

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
                    if(comptabilite_type($1.type, $3.type) != 0){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type= get_type($1.type, $3.type);   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("+",$1.res,$3.res,$$.res);
                    }
                  }
   | exp MIN exp {
                    if(comptabilite_type($1.type, $3.type) != 0){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type= get_type($1.type, $3.type); 
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("-",$1.res,$3.res,$$.res);
                    }
                  }
   | exp MUL exp {
                    if(comptabilite_type($1.type, $3.type) != 0){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      $$.type= get_type($1.type, $3.type); 
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      $$.res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("*",$1.res,$3.res,$$.res);
                    }
                  }
   | exp DIV exp {
                    if(comptabilite_type($1.type, $3.type) != 0){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else if($3.res == 0){
                      yyerror("error semantique divise sur zero \n");
                    }else{
                      $$.type= get_type($1.type, $3.type); 
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

condition:  Bcond else_bloc OCL IF CL ;

else_bloc: OP ELSE CL inst_list OCL ELSE CL  {
                                                  sprintf(temp, "%d", qc);
                                                  strcpy(quad[if_BR].res, temp);
                                              }
         |
         ;
         
Bcond: Acond OP THEN CL inst_list OCL THEN CL {
                                         if_BR = qc;
                                         if_BZ = pile_pop();
                                         printf("pile bz pop = %d \n", if_BZ);
                                         printf("qcThen = %d \n", qc);
                                         printf("if_bz = %d \n", if_BZ);
                                         generer_quad("BR", " ", " ", " ");
                                         sprintf(temp, "%d", qc);
                                         strcpy(quad[if_BZ].res, temp);
                                         printf("quad = %s \n", quad[if_BZ].oper);
                              
                                       } 
     ;
Acond: OP IF DP exp_log CL   {
                                  //if_BZ = qc;
                                  pile_push(qc);
                                  generer_quad("BZ", " ", $4.res, " ");
                              }
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
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | SUP OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGT", $3.res, $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | INF OPR exp_log V exp_log CPR  {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLT", $3.res, $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | SUPE OPR exp_log V exp_log CPR {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGE", $3.res, $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        }
       | INFE OPR exp_log V exp_log CPR {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLE", $3.res, $5.res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           $$.res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", $$.res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
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
                                           generer_quad("BR", " ", " ", temp);
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
                                          generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", $$.res);
                                        } 
       ;
/*--------------------------------------------- Partie FOR ------------------------------------------------*/
for: Afor inst_list OCL FOR CL  {
                                  for_BZ = pile_pop_1();
                                  sprintf(temp, "%d", qc+1);
                                  strcpy(quad[for_BZ].res, temp);
                                  sprintf(temp, "%d", for_BZ);
                                  generer_quad("BR", " ", " ", temp);
                                }
   ;
Afor: OP FOR IDF AFC INTEGER UNTIL IDF CL {
                                            dec($3); 
                                            dec($7);
                                            sprintf(temp, "%d", $5);
                                            generer_quad("=", temp, " ", $3);   
                                            pile_push_1(qc);
                                            generer_quad("BGT", $3, $7, " ");
                                          }
    ;

/*--------------------------------------------- Partie WHILE ------------------------------------------------*/
while: Awhile exp_log SCL OCL DO CL     {
                                          while_BZ = pile_pop_2();
                                          sprintf(temp, "%d", while_BZ);
                                          generer_quad("BZ", " ", $2.res, temp);
                                        }
     ;
Awhile: Bwhile inst_list OP WHILE DP 
      ;

Bwhile: OP DO CL  { 
                    printf(" qc in debut while = %d \n" , qc); 
                    pile_push_2(qc);
                  }
      ;

%%
int yyerror (char* msg)
{printf (" %s ligne %d colonne %d \n",msg,row,column); exit (0);return 1;}

int main ()
{ 
yyin = fopen("in.txt", "r");
init();
yyparse ();
//optimisation();
generer_asm();
printHashTable();
afficher_quad();
fclose (yyin);
}

