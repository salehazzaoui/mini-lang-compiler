#ifndef QUAD_H
#define QUAD_H

typedef struct
{
    char oper[100]; // Opérateur
    char op1[100];  // Opérande 1
    char op2[100];  // Opérande 2
    char res[100];  // Résultat
} Quadruplet;

extern int qc;
Quadruplet quad[1000];
void generer_quad(char *oper, char *op1, char *op2, char *res);
void afficher_quad();

#endif // QUAD_H