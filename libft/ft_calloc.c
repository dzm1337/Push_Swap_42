/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:00:01 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/03 17:27:56 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	size_t		*mem;
	size_t		total_size;
	char		*cbyte;

	total_size = nmemb * size;
	if ((nmemb != 0 && total_size / nmemb != size))
		return (NULL);
	mem = (void *)malloc(total_size);
	if (!mem)
		return (NULL);
	cbyte = (char *)mem;
	i = 0;
	while (i < total_size)
	{
		cbyte[i] = 0;
		i++;
	}
	return (mem);
}
