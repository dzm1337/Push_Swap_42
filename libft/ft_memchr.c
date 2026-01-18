/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:24:09 by dde-paul          #+#    #+#             */
/*   Updated: 2025/10/31 23:02:08 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
