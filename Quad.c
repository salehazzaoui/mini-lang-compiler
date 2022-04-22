#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include"Quad.h"

void generer_quad(char* oper,char* op1,char* op2,char* res)
{
	strcpy(quad[qc].oper,oper);
	strcpy(quad[qc].op1,op1);
	strcpy(quad[qc].op2,op2);
	strcpy(quad[qc].res,res);
    qc++;
}

void afficher_quad()
{
	int i;
	FILE *yyout_quad;
	yyout_quad=fopen("quadruplet.txt","wt");

	for (i=0;i<qc;i++)
	fprintf(yyout_quad,"%d - ( %s  ,  %s  ,  %s  ,  %s )\n",i, quad[i].oper, quad[i].op1, quad[i].op2, quad[i].res); 

	fclose(yyout_quad);
}