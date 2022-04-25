#ifndef TS_H
#define TS_H

#define TABLE_SIZE 100

typedef struct node
{
    char *name;
    char *type;  /* symbol or keyword or constante */
    int varType; /* 1:entier, 2: reel, 3:charactére, 4:string, 5:boolean */
    int size;    /* 0:variable simple, sinon la taille de tableau */
    struct node *next;
} element;

element *hashtable[TABLE_SIZE];

void init();
int hash(char *);
int search(char *, int *, element **);
void insert(char *, char *);
void insert_type(char *name, char *type, int varType, int size);
int typeIdf(char *);
void printHashTable();

#endif // TS_H
