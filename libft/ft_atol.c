/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:18:36 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/08 18:57:08 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/push_swap.h" 

long    ft_atol(const char *str)
{
    long    result;
    int     sign;
    int     i;

    result = 0;
    sign = 1; 
    i = 0;
    while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        if (sign == 1 && result > INT_MAX)
            return ((long)INT_MAX + 1);
        if (sign == -1 && (result * -1) < INT_MIN)
            return ((long)INT_MIN - 1);
        i++;
    }
    return (result * sign);
}
