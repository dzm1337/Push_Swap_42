/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:22:08 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 00:00:48 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
