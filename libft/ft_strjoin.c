/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:37:58 by dde-paul          #+#    #+#             */
/*   Updated: 2025/10/31 23:20:02 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		total;	
	char		*str;

	total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * total);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, total);
	ft_strlcpy(str + ft_strlen(s1), s2, total);
	return (str);
}
