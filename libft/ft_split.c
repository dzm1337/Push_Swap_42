/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:56:01 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/03 19:19:11 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

static size_t	ft_countwords(char const *s, char c)
{
	size_t		i;
	size_t		count;

	if (!s)
		return (0);
	if (c == '\0')
		return (1);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_cpyword(const char *s, char c)
{
	size_t		i;
	char		*dst;	

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;

	if (!s)
		return (0);
	res = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i > 0 && s[i - 1] == c && s[i] != c) || (i == 0 && s[i] != c))
		{
			res[j] = ft_cpyword(s + i, c);
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
