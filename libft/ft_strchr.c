/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 23:40:17 by dde-paul          #+#    #+#             */
/*   Updated: 2025/10/31 23:40:40 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
