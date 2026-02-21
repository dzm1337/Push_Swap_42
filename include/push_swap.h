#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	int				cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

/* --- Funções de Erro e Parsing --- */
void	stack_init(t_node **a, char **argv);
void	free_matrix(char **argv);
void	free_stack(t_node **stack);
void	free_errors(t_node **a);
bool	error_duplicate(t_node *a, int n);

/* --- Utilitários de Stack --- */
int		stack_len(t_node *stack);
bool	is_sorted(t_node *stack);
t_node	*find_last(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*find_max(t_node *stack);
t_node	*get_cheapest(t_node *stack);
void	append_node(t_node **stack, int n);

/* --- Comandos --- */
void	pa(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

/* --- Algoritmo --- */
void	set_current_position(t_node *stack);
void	set_cost_a(t_node *a, t_node *b);
void	set_cheapest(t_node *stack);
void	init_nodes_a(t_node *a, t_node *b);
void	init_nodes_b(t_node *a, t_node *b);
void	move_a_to_b(t_node **a, t_node **b);
void	move_b_to_a(t_node **a, t_node **b);
void	finish_rotation(t_node **stack, t_node *top_node, char stack_name);
void	sort_three(t_node **a);
void	sort_stacks(t_node **a, t_node **b);
void	min_on_top(t_node **a);

#endif
