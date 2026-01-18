/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:58:49 by dde-paul          #+#    #+#             */
/*   Updated: 2026/01/18 19:08:35 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

long	ft_atol(const char *s)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	i = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
