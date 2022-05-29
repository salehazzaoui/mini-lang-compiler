#include <stdio.h>
#include <string.h>
#include "RS.h"
#include "TS.h"

int yyerror(char *);

void dec(char *el)
{
    int index;
    element *adr;
    if (!search(el, &index, &adr))
    {
        yyerror("erreur semantique IDF non declare \n");
    }
}

void double_dec(char *el)
{
    int index;
    element *adr;
    if (search(el, &index, &adr))
    {
        yyerror("erreur semantique double declaration d'un IDF \n");
    }
}

int check_constante(char *el)
{
    int index;
    element *adr;
    search(el, &index, &adr);
    if (strcmp(adr->type, "constante") == 0)
    {
        yyerror("erreur semantique no affectation de constante \n");
    }
}

int comptabilite_type(int a, int b)
{
    int first, last;
    first = a;
    last = b;
    if (first == 2 && last == 1)
    {
        return 0;
    }
    else if (first == 1 && last == 2)
    {
        return 0;
    }
    else if (first == last)
    {
        return 0;
    }
    return 1;
}

int get_type(int a, int b)
{
    int first, last;
    first = a;
    last = b;
    if (first == 2 && last == 1)
    {
        return first;
    }
    else if (first == 1 && last == 2)
    {
        return last;
    }
    else if (first == last)
    {
        return first;
    }
}