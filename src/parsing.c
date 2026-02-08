/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:44:06 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/05 19:45:10 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/push_swap.h"

void	init_stack_a(t_node **stack_a, char **argv)
{
	int	i;
	long	num;
	
	num = 0;
	i = 0;
	while (argv[i])
	{
		if (!(ft_isnumber(argv[i])))
			return (ERROR_MSG);
		
	}
}
