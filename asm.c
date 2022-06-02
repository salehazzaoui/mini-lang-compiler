#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asm.h"
#include "Quad.h"
#include "TS.h"

void generer_asm()
{
    // change_temp();

    FILE *fasm;

    fasm = fopen("asm.txt", "w");

    if (fasm == NULL)
    {
        printf("Error with asumbleur.txt file !");
        exit(1);
    }

    fprintf(fasm, "%s \n", "TITLE mini_lang.asm:");
    fprintf(fasm, "%s \n", "DATA segment");
    int j = 0;
    element *p;
    for (j = 0; j < TABLE_SIZE; j++)
    {
        if (hashtable[j] != NULL)
        {
            p = hashtable[j];
            while (p != NULL)
            {
                if (strcmp(p->type, "variable") == 0 && (p->varType == 1 || p->varType == 3 || p->varType == 5) && p->size == 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DB");
                    fprintf(fasm, "%s \n", "?");
                }
                if (strcmp(p->type, "variable") == 0 && p->varType == 2 && p->size == 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DW");
                    fprintf(fasm, "%s \n", "?");
                }
                if (strcmp(p->type, "constante") == 0 && (p->varType == 1 || p->varType == 3 || p->varType == 5) && p->size == 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DB");
                    fprintf(fasm, "%s \n", "?");
                }
                if (strcmp(p->type, "constante") == 0 && p->varType == 2 && p->size == 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DW");
                    fprintf(fasm, "%s \n", "?");
                }
                if (strcmp(p->type, "variable") == 0 && (p->varType == 1 || p->varType == 3 || p->varType == 5) && p->size != 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DB");
                    fprintf(fasm, "%d \t", p->size);
                    fprintf(fasm, "%s \n", "DUP(?)");
                }
                if (strcmp(p->type, "variable") == 0 && p->varType == 2 && p->size != 0)
                {
                    fprintf(fasm, "\t %s \t", p->name);
                    fprintf(fasm, "%s \t", "DW");
                    fprintf(fasm, "%d \t", p->size);
                    fprintf(fasm, "%s \n", "DUP(?)");
                }

                p = p->next;
            }
        }
    }
    fprintf(fasm, "\t %s \t", "temp");
    fprintf(fasm, "%s \t", "DW");
    fprintf(fasm, "%d \t", 100);
    fprintf(fasm, "%s \n", "DUP(?)");
    fprintf(fasm, "%s \n", "DATA ends \n");

    fprintf(fasm, "%s \n", "CODE segment");
    fprintf(fasm, "%s \n", "MAIN:");
    fprintf(fasm, "%s \n", "ASSUME CS:CODE, DS:DATA");
    fprintf(fasm, "%s \n", "\t MOV AX,DATA");
    fprintf(fasm, "%s \n", "\t MOV DS, AX");
    int i = 0;
    for (i = 0; i < qc; i++)
    {
        int index;
        element *adr;
        /*--------------------------------------Affictation-----------------------------------------------*/
        if (search(quad[i].res, &index, &adr) == 1)
        {
            if (strcmp(quad[i].oper, "=") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                if (strcmp(adr->type, "constante") == 0)
                {
                    fprintf(fasm, "\t MOV %s,%s \n", quad[i].res, quad[i].op1);
                }
                else
                {
                    // fprintf(fasm, "MOV %s,%s \n", quad[i].res, quad[i].op1);
                    fprintf(fasm, "\t MOV AX,%s\n", quad[i].op1);
                    fprintf(fasm, "\t MOV %s,AX\n\n", quad[i].res);
                }
            }
        }
        else
        {
            if (strcmp(quad[i].oper, "=") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                // fprintf(fasm, "MOV %s,%s \n", quad[i].res, quad[i].op1);
                fprintf(fasm, "\t MOV AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t MOV %s,AX\n\n", quad[i].res);
            }
        }

        /*--------------------------------------Addition-----------------------------------------------*/
        element *adr1, *adr2;
        if (search(quad[i].op1, &index, &adr1) == 1 && search(quad[i].op1, &index, &adr2) == 1)
        {
            if (strcmp(quad[i].oper, "+") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t ADD  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr1) == 1 && search(quad[i].op1, &index, &adr2) != 1)
        {
            if (strcmp(quad[i].oper, "+") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t ADD  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr1) != 1 && search(quad[i].op1, &index, &adr2) == 1)
        {
            if (strcmp(quad[i].oper, "+") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t ADD  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr1) != 1 && search(quad[i].op1, &index, &adr2) != 1)
        {
            if (strcmp(quad[i].oper, "+") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t ADD  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }

        /*--------------------------------------Soustraction-----------------------------------------------*/
        element *adr3, *adr4;
        if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "-") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t SUB  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "-") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t SUB  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "-") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t SUB  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "-") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t SUB  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }

        /*--------------------------------------Multiblication-----------------------------------------------*/
        // element *adr3, *adr4;
        if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "*") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t MUL  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "*") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t MUL  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "*") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t MUL  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "*") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t MUL  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }

        /*--------------------------------------Division-----------------------------------------------*/
        // element *adr3, *adr4;
        if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "/") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t DIV  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) == 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "/") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t DIV  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) == 1)
        {
            if (strcmp(quad[i].oper, "/") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t DIV  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }
        else if (search(quad[i].op1, &index, &adr3) != 1 && search(quad[i].op1, &index, &adr4) != 1)
        {
            if (strcmp(quad[i].oper, "/") == 0)
            {
                if (recherche_etq(i) == 0)
                    fprintf(fasm, "%d : ", i);

                fprintf(fasm, "\t MOVE AX,%s\n", quad[i].op1);
                fprintf(fasm, "\t DIV  AX,%s\n", quad[i].op2);
                fprintf(fasm, "\t MOVE  %s,AX\n", quad[i].res);
            }
        }

        /*--------------------------------------BZ-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BZ") == 0)
        {
            fprintf(fasm, "\t CMP %s,0\n", quad[i].op2);
            fprintf(fasm, "\t JE %s\n", quad[i].res);
        }

        /*--------------------------------------BLT-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BLT") == 0)
        {
            fprintf(fasm, "\t CMP %s,%s\n", quad[i].op1, quad[i].op2);
            fprintf(fasm, "\t JL %s\n", quad[i].res);
        }

        /*--------------------------------------BLE-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BLE") == 0)
        {
            fprintf(fasm, "\t CMP %s,%s\n", quad[i].op1, quad[i].op2);
            fprintf(fasm, "\t JLE %s\n", quad[i].res);
        }

        /*--------------------------------------BGL-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BGL") == 0)
        {
            fprintf(fasm, "\t CMP %s,%s\n", quad[i].op1, quad[i].op2);
            fprintf(fasm, "\t JG %s\n", quad[i].res);
        }

        /*--------------------------------------BGE-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BGE") == 0)
        {
            fprintf(fasm, "\t CMP %s,%s\n", quad[i].op1, quad[i].op2);
            fprintf(fasm, "\t JGE %s\n", quad[i].res);
        }

        /*--------------------------------------BR-----------------------------------------------*/
        if (strcmp(quad[i].oper, "BR") == 0)
        {
            fprintf(fasm, "\t JMP %s\n", quad[i].res);
        }
    }

    fprintf(fasm, "%s \n", "MAIN ENDS");
    fprintf(fasm, "%s \n", "END MAIN");

    fclose(fasm);
}

int recherche_etq(int val)
{
    int i = 0, trouve = -1;
    char chaine[100];
    sprintf(chaine, "%d", val);
    while ((i < qc) && (trouve = -1))
    {
        if ((strcmp(quad[i].oper, "BZ") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        else if ((strcmp(quad[i].oper, "BR") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        else if ((strcmp(quad[i].oper, "BGT") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        else if ((strcmp(quad[i].oper, "BGE") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        else if ((strcmp(quad[i].oper, "BLT") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        else if ((strcmp(quad[i].oper, "BLE") == 0) && (strcmp(quad[i].res, chaine) == 0))
        {
            trouve = 0;
            return trouve;
        }
        i++;
    }
    return -1;
}

/*void change_temp()
{
    int i;
    char op1[10], op2[10], res[10], temp[100];
    int k = 0;
    for (i = 0; i < qc; i++)
    {
        sprintf(op1, "%s", quad[i].op1);
        sprintf(op2, "%s", quad[i].op2);
        sprintf(res, "%s", quad[i].res);
        if (op1[0] == "T")
        {
            sprintf(temp, "temp(%d)", k);
            strcpy(quad[i].op1, temp);
            k++;
        }
        if (op2[0] == "T")
        {
            sprintf(temp, "temp(%d)", k);
            strcpy(quad[i].op2, temp);
            k++;
        }
        if (res[0] == "T")
        {
            sprintf(temp, "temp(%d)", k);
            strcpy(quad[i].res, temp);
            k++;
        }
    }
}*/