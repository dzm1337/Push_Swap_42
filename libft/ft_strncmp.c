/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:38:43 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/03 19:20:37 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while ((s1[i] && s2[i]) && (size_t)i < n)
	{
		if (s1[i] != s2[i])
			retur		n (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
