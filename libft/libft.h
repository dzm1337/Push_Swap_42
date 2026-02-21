/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:10:30 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/21 16:07:21 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

bool	ft_isnumber(const char *str);
long	ft_atol(const char *str);
char	**ft_split(const char *str, char sep);
