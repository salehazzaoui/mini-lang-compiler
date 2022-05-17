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

struct Node
{
    int data;
    struct Node *next;
};
extern struct Node *top;

struct Node1
{
    int data;
    struct Node1 *next;
};
extern struct Node1 *top1;

struct Node2
{
    int data;
    struct Node2 *next;
};
extern struct Node2 *top2;

void generer_quad(char *oper, char *op1, char *op2, char *res);
void afficher_quad();

void pile_push(int value);
int pile_pop();
void pile_display();

void pile_push_1(int value);
int pile_pop_1();
void pile_display_1();

void pile_push_2(int value);
int pile_pop_2();
void pile_display_2();

#endif // QUAD_H