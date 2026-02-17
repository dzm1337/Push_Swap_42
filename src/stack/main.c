#include "../include/push_swap.h"
#include <stdio.h>

// Função para limpar a tela e mostrar o estado atual
void	debug_status(t_node *a, t_node *b, char *step_name)
{
	t_node	*tmp;

	printf("\n\n========================================\n");
	printf("PASSO: %s\n", step_name);
	printf("========================================\n");

	printf("--- STACK A ---\n");
	tmp = a;
	while (tmp)
	{
		printf("[%d] ", tmp->value);
		if (tmp->cheapest) printf("<- CHEAPEST ");
		if (tmp->target) printf("(Target: %d) ", tmp->target->value);
		printf("Cost: %d\n", tmp->cost);
		tmp = tmp->next;
	}

	printf("\n--- STACK B ---\n");
	tmp = b;
	while (tmp)
	{
		printf("[%d]\n", tmp->value);
		tmp = tmp->next;
	}
	printf("----------------------------------------\n");
	printf("Pressione ENTER para continuar...");
	getchar(); // Espera você apertar ENTER
}

int	main(int argc, char **argv)
{
	t_node	*a = NULL;
	t_node	*b = NULL;
	int		len_a;

	if (argc < 2) return (0);

	// 1. INICIALIZAÇÃO
	stack_init(&a, argv + 1);
	debug_status(a, b, "INICIO (Stack montada)");

	// 2. FASE 1: JOGAR 2 PARA B
	len_a = stack_len(a);
	if (len_a-- > 3 && !is_sorted(a))
	{
		pb(&b, &a);
		debug_status(a, b, "PRIMEIRO PB (Regra do Turk)");
	}
	if (len_a-- > 3 && !is_sorted(a))
	{
		pb(&b, &a);
		debug_status(a, b, "SEGUNDO PB (Regra do Turk)");
	}

	// 3. FASE 2: LOOP PRINCIPAL (A -> B)
	while (len_a-- > 3 && !is_sorted(a))
	{
		init_nodes_a(a, b); // Calcula tudo
		debug_status(a, b, "CALCULO DE CUSTOS (Quem é o mais barato?)");
		
		move_a_to_b(&a, &b); // Executa o movimento
		debug_status(a, b, "MOVIMENTO EXECUTADO (move_a_to_b)");
	}

	// 4. FASE 3: ORDENAR OS 3 ULTIMOS
	sort_three(&a);
	debug_status(a, b, "SORT THREE (Os 3 ultimos de A)");

	// 5. FASE 4: VOLTAR TUDO (B -> A)
	while (b)
	{
		init_nodes_b(a, b);
		move_b_to_a(&a, &b);
		debug_status(a, b, "RETORNO (move_b_to_a)");
	}

	// 6. FASE 5: AJUSTE FINAL
	set_current_position(a);
	min_on_top(&a);
	debug_status(a, b, "MIN ON TOP (Finalizado)");

	free_stack(&a);
	free_stack(&b);
	return (0);
}