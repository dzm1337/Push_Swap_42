/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:52:55 by dde-paul          #+#    #+#             */
/*   Updated: 2025/11/03 17:30:02 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*sub_str;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
