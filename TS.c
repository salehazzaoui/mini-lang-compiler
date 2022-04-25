#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TS.h"

int hash(char *el)
{
    int i = 0, count = 0;
    while (el[i] != '\0')
    {
        count += el[i] * i * (10 * (i + 1));
        i++;
    }
    return (count % TABLE_SIZE);
}

void init()
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
    {
        hashtable[i] = NULL;
    }
}

void insert(char *name, char *type)
{
    int index;
    element *p;
    element *adr;
    int b = search(name, &index, &adr);
    p = malloc(sizeof(element));
    p->name = name;
    p->type = type;
    if (hashtable[index] == NULL)
    {
        p->next = NULL;
        hashtable[index] = p;
    }
    else
    {
        p->next = hashtable[index];
        hashtable[index] = p;
    }
}

void insert_type(char *name, char *type, int varType, int size)
{

    int index;
    element *p;
    element *adr;
    int b = search(name, &index, &adr);
    p = malloc(sizeof(element));
    p->name = name;
    p->type = type;
    p->varType = varType;
    p->size = size;
    if (hashtable[index] == NULL)
    {
        p->next = NULL;
        hashtable[index] = p;
    }
    else
    {
        p->next = hashtable[index];
        hashtable[index] = p;
    }
}

/*
 * return 1, search found
 * return 0, Otherwise
 */
int search(char *name, int *index, element **adr)
{
    element *p;
    *index = hash(name);
    p = hashtable[*index];
    *adr = p;
    if (p == NULL)
        return 0;
    if (!strcmp(p->name, name))
        return 1;
    p = p->next;
    while (p != NULL && strcmp(p->name, name))
        p = p->next;
    *adr = p;
    if (p == NULL)
        return 0;
    return 1;
}

int typeIdf(char *el)
{
    int index;
    element *adr;
    search(el, &index, &adr);
    return (adr->varType);
}

void printHashTable()
{
    int i = 0;
    element *p;
    for (i = 0; i < TABLE_SIZE; i++)
    {
        if (hashtable[i] != NULL)
        {
            p = hashtable[i];
            while (p != NULL)
            {
                printf("%s ---> %s ---> %d --> %d\n", p->name, p->type, p->varType, p->size);
                p = p->next;
            }
        }
    }
}
