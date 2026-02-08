/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treino_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:03:22 by dde-paul          #+#    #+#             */
/*   Updated: 2026/02/08 16:59:45 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef	struct s_node
{
	struct s_node	*next;
	long	value;
}	t_node;

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	t_node	*new_node;
	t_node	*temp;
	t_node	*head;

	j = 1;
	head = NULL;
	while (argv[j])
	{
		new_node = malloc(sizeof(t_node));
		if (!new_node)
			return (1);
		new_node->value = atol(argv[j]);
		new_node->next = head;
		head = new_node;
		j++;
	}
	temp = head;
	while (temp != NULL)
	{
		printf("%ld ", temp->value);
		temp = temp->next;
	}
}
