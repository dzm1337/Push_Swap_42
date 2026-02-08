/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:32:30 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/08 18:51:34 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define ERROR_MSG "Error\n"
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#include "../libft/libft.h"

typedef	struct s_node
{
	int	value;
	int	index;
	int	cost;
	struct s_node	*target;
	struct s_node	*next;
	struct	s_node	*prev;
} t_node;
#endif
