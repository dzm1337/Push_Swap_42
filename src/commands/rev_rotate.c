/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:42:41 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:12:44 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
}

void	rra(t_node **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	if ((!a || !*a || !(*a)->next) && (!b || !*b || !(*b)->next))
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
