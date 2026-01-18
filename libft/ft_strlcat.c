/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:37:23 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/03 18:33:31 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;	
	size_t		len_dest;
	size_t		len_src;

	i = 0;
	len_dest = 0;
	len_src = ft_strlen(src);

	while (len_dest < size && dst[len_dest])
		len_dest++;
	if (size == 0 || len_dest >= size)
		return (len_dest + len_src);
	while (src[i] && len_dest + i < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
