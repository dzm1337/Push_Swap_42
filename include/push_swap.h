/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:32:30 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/08 18:51:34 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define ERROR_MSG "Error\n"
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>
#include <stdio.h>
#include "../libft/libft.h"

typedef	struct s_node
{
	int	value;
	int	index;
	int	cost;
	struct	s_node	*target;
	struct	s_node	*next;
	struct	s_node	*prev;
	bool	above_median;
	bool	cheapest;
} t_node;

t_node  *find_last(t_node *stack);
void    append_node(t_node  **stack, int n);
bool 	error_duplicate(t_node *a, int n);
void    stack_init(t_node **a, char **argv);
void    free_stack(t_node   **stack);
void    free_errors(t_node **a);
void    	pa(t_node **a, t_node **b);
void    	pb(t_node **b, t_node **a);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void   	rra(t_node **a);
void    rrb(t_node **b);
void    rrr(t_node  **a, t_node **b);
t_node  *find_min(t_node *stack);
t_node  *find_max(t_node *stack);
void    set_current_position(t_node *stack);
int 		stack_len(t_node *stack);
t_node  *get_cheapest(t_node *stack);
void    set_target_a(t_node *a, t_node *b);
void    set_cost_a(t_node *a, t_node *b);
void    set_cheapest(t_node *stack);
bool    is_sorted(t_node *stack);
void	move_a_to_b(t_node **a, t_node **b);
void	move_b_to_a(t_node **a, t_node **b);
void	finish_rotation(t_node **stack, t_node *top_node, char stack_name);
void    init_nodes_a(t_node *a, t_node *b);
void    init_nodes_b(t_node *a, t_node *b);

#endif