/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:38:29 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 17:05:57 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	swap(t_node **stack)
{
	int	temp_val;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp_val = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp_val;
}

void	sa(t_node **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	if ((!a || !*a || !(*a)->next) && (!b || !*b || !(*b)->next))
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
