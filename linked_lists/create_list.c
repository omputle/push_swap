/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 03:02:15 by omputle           #+#    #+#             */
/*   Updated: 2019/09/06 23:15:44 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

static t_node	*create_node(char *str)
{
	t_node	*node;
	int		data;

	node = (t_node*)malloc(sizeof(t_node) * 1);
	data = ft_atoi(str);
	node->element = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_node	*create_list(int n, char **av)
{
	int		count;
	t_node	*start;
	t_node	*temp;

	start = NULL;
	count = 0;
	while (count < n)
	{
		temp = create_node(av[count + 1]);
		if (ft_isnum(av[count + 1]) == 0)
			return (NULL);
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			add_node(&start, ft_atoi(av[count + 1]));
		}
		count++;
	}
	return (start);
}
