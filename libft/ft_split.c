/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:57:25 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/08 19:07:09 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/push_swap.h"
static size_t	ft_countwords(const char *s, char sep)
{
	int i;
	int	count;

	if (!s)
		return (0);
	if (sep == '\0')
		return (1);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == sep && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	*ft_cpywords(const char *s, char sep)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != sep)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free_split(char	**str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(const char	*str, char sep)
{
	int	i;
	int	j;
	char	**res;

	if (!str)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_countwords(str, sep) + 1));
	if (!res)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i])
		{
			res[j] = ft_cpywords(&str[i], sep);
			if (!res[j])
			{
				ft_free_split(res, j);
				return (NULL);
			}
			j++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	res[j] = NULL;
	return (res);
}
