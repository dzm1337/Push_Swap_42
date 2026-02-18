/*
#include "../include/push_swap.h"
#include <stdio.h>

// Função para exibir as stacks lado a lado
void display_stacks(t_node *a, t_node *b)
{
	printf("\n|------- STACK A -------|------- STACK B -------|\n");
	printf("|  Val  | Prev  | Next  |  Val  | Prev  | Next  |\n");
	printf("|-------|-------|-------|-------|-------|-------|\n");

	while (a || b)
	{
		// Coluna Stack A
		if (a)
		{
			printf("| %5d | %s | %s ", a->value, 
				(a->prev ? " OK  " : "NULL "), (a->next ? " OK  " : "NULL "));
			a = a->next;
		}
		else
			printf("|       |       |       ");

		printf("|");

		// Coluna Stack B
		if (b)
		{
			printf(" %5d | %s | %s |", b->value, 
				(b->prev ? " OK  " : "NULL "), (b->next ? " OK  " : "NULL "));
			b = b->next;
		}
		else
			printf("       |       |       |");
		printf("\n");
	}
	printf("|-----------------------------------------------|\n");
}

int main(int argc, char **argv)
{
	t_node *a = NULL;
	t_node *b = NULL;
	int choice;

	if (argc < 2)
		return (printf("Uso: ./push_swap 1 2 3\n"), 0);
	stack_init(&a, argv + 1);

	do {
		display_stacks(a, b);
		printf("\nMENU DE OPERACOES:\n");
		printf("1: sa    2: sb    3: ss\n");
		printf("4: pa    5: pb\n");
		printf("6: ra    7: rb    8: rr\n");
		printf("9: rra  10: rrb  11: rrr\n");
		printf("0: SAIR\n");
		printf("Escolha uma operacao: ");
		
		if (scanf("%d", &choice) <= 0) break;

		switch (choice)
		{
			case 1: sa(&a); break;
			case 2: sb(&b); break;
			case 3: ss(&a, &b); break;
			case 4: pa(&a, &b); break;
			case 5: pb(&b, &a); break;
			case 6: ra(&a); break;
			case 7: rb(&b); break;
			case 8: rr(&a, &b); break;
			case 9: rra(&a); break;
			case 10: rrb(&b); break;
			case 11: rrr(&a, &b); break;
			case 0: printf("Saindo...\n"); break;
			default: printf("Opcao invalida!\n");
		}
	} while (choice != 0);

	free_stack(&a);
	free_stack(&b);
	return (0);
}
	*/