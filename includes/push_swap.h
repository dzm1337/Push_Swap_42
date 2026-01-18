/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:49:41 by dde-paul          #+#    #+#             */
/*   Updated: 2026/01/18 18:58:16 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include "..libft/libft.h"

typedef int t_bool;
#define TRUE 1
#define FALSE 0

typedef struct s_stack_node
{
	int	value;
	int	index;
	int	push_cost;
	t_bool	above_median;
	t_bool	cheapest;
	struct s_stack_node *target_node;
	struct s_stack_node *next;
	struct s_stack_node *prev;
}	t_stack_node;

// src/errors/validation.c
long	ft_atol(const char *s);

// src/stack/init_stack.c
void	init_stack_a(t_stack_node **a, char **argv);

#endif
