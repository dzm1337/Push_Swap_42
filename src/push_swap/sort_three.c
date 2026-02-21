/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:14:33 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:40:51 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_node **a)
{
	t_node	*biggest_node;

	biggest_node = find_max(*a);
	if (*a == biggest_node)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	min_on_top(t_node **a)
{
	t_node	*min_node;

	min_node = find_min(*a);
	if (min_node->above_median)
	{
		while (*a != min_node)
			ra(a);
	}
	else
	{
		while (*a != min_node)
			rra(a);
	}
}
