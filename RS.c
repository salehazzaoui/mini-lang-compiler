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