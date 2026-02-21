/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:40:00 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:42:18 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool	error_duplicate(t_node *a, int n)
{
	if (!a)
		return (false);
	while (a)
	{
		if (a->value == n)
			return (true);
		a = a->next;
	}
	return (false);
}

void	free_stack(t_node **stack)
{
	t_node	*temp;
	t_node	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

void	free_errors(t_node **a)
{
	free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_matrix(char **argv)
{
	int	i;

	i = -1;
	if (argv == NULL)
		return ;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}
