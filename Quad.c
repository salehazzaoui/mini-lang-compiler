#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "Quad.h"

int qc = 0;
void generer_quad(char *oper, char *op1, char *op2, char *res)
{
	strcpy(quad[qc].oper, oper);
	strcpy(quad[qc].op1, op1);
	strcpy(quad[qc].op2, op2);
	strcpy(quad[qc].res, res);
	qc++;
}

void afficher_quad()
{
	int i;
	FILE *yyout_quad;
	yyout_quad = fopen("quadruplet.txt", "wt");

	for (i = 0; i < qc; i++)
		fprintf(yyout_quad, "%d - ( %s  ,  %s  ,  %s  ,  %s )\n", i, quad[i].oper, quad[i].op1, quad[i].op2, quad[i].res);

	fclose(yyout_quad);
}

struct Node *top = NULL;

void pile_push(int value)
{
	struct Node *newNode;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = value;
	if (top == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = top;
	}
	top = newNode;
}

int pile_pop()
{
	if (top == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		struct Node *temp = top;
		int temp_data = top->data;
		top = top->next;
		free(temp);
		return temp_data;
	}
}

void pile_display()
{

	if (top == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("The stack is \n");
		struct Node *temp = top;
		while (temp->next != NULL)
		{
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->NULL\n\n", temp->data);
	}
}

struct Node1 *top1 = NULL;

void pile_push_1(int value)
{
	struct Node1 *newNode;
	newNode = (struct Node1 *)malloc(sizeof(struct Node1));
	newNode->data = value;
	if (top1 == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = top1;
	}
	top1 = newNode;
}

int pile_pop_1()
{
	if (top1 == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		struct Node1 *temp = top1;
		int temp_data = top1->data;
		top1 = top1->next;
		free(temp);
		return temp_data;
	}
}

void pile_display_1()
{
	if (top1 == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("The stack is \n");
		struct Node1 *temp = top1;
		while (temp->next != NULL)
		{
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->NULL\n\n", temp->data);
	}
}

struct Node2 *top2 = NULL;

void pile_push_2(int value)
{
	struct Node2 *newNode;
	newNode = (struct Node2 *)malloc(sizeof(struct Node2));
	newNode->data = value;
	if (top2 == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = top2;
	}
	top2 = newNode;
}

int pile_pop_2()
{
	if (top2 == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		struct Node2 *temp = top2;
		int temp_data = top2->data;
		top2 = top2->next;
		free(temp);
		return temp_data;
	}
}

void pile_display_2()
{
	if (top2 == NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("The stack is \n");
		struct Node2 *temp = top2;
		while (temp->next != NULL)
		{
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->NULL\n\n", temp->data);
	}
}

void optimisation()
{
	int i, j;
	for (i = 0; i < qc; i++)
	{
		for (j = 0; j < qc; j++)
		{
			if (strcmp(quad[i].res, quad[j].op1) == 0 && strcmp(quad[j].oper, "=") == 0)
			{
				strcpy(quad[i].res, quad[j].res);
				strcpy(quad[j].oper, " ");
				strcpy(quad[j].op1, " ");
				strcpy(quad[j].op2, " ");
				strcpy(quad[j].res, " ");
			}
		}
	}
}