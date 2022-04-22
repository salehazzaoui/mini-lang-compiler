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
