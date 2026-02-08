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

int	count_words(const char *str, char sep)
{
	int	i;
	int	words;	

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == sep && str[i])
			i++;
		if (str[i])
		{
			words++;
			while (str[i] && str[i] != sep)
			i++;
		}
	}
	return (words);
}

int	main(void)
{
	printf("%d", count_words("diogo marcelo de paulo triles", ' '));
}
