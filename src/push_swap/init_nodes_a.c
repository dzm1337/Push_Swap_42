/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:13:34 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:26:24 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_target_a(t_node *a, t_node *b)
{
	t_node	*current_b;
	long	best_match_index;

	if (!a || !b)
		return ;
	while (a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->value < a->value
				&& current_b->value > best_match_index)
			{
				best_match_index = current_b->value;
				a->target = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target = find_max(b);
		a = a->next;
	}
}

void	set_cost_a(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	if (!a || !b)
		return ;
	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->above_median))
			a->cost = len_a - (a->index);
		if (a->target->above_median)
			a->cost += a->target->index;
		else
			a->cost += len_b - (a->target->index);
		a = a->next;
	}
}

void	init_nodes_a(t_node *a, t_node *b)
{
	if (!a || !b)
		return ;
	set_current_position(a);
	set_current_position(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}
