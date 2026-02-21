/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:35:00 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:45:32 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	sort_choice(t_node **a, t_node **b)
{
	if (stack_len(*a) == 2)
		sa(a);
	else if (stack_len(*a) == 3)
		sort_three(a);
	else
		sort_stacks(a, b);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	char	**args;

	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	stack_init(&a, args);
	if (argc == 2)
		free_matrix(args);
	if (!is_sorted(a))
		sort_choice(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
