/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:13:46 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:36:39 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	set_target_b(t_node *a, t_node *b)
{
	t_node	*current_a;
	long	best_match_index;

	if (!a || !b)
		return ;
	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->value > b->value
				&& current_a->value < best_match_index)
			{
				best_match_index = current_a->value;
				b->target = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target = find_min(a);
		b = b->next;
	}
}

void	init_nodes_b(t_node *a, t_node *b)
{
	if (!a || !b)
		return ;
	set_current_position(a);
	set_current_position(b);
	set_target_b(a, b);
}
