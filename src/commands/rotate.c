/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:49:34 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/10 11:48:13 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate(t_node **stack)
{
	t_node *first;
	t_node *last;
	
	if (!stack || *!stack->next)
		return ;
	first = *stack;
	*stack = first->next;
	(*stack)->prev = NULL;
	last = find_last(*stack);
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
