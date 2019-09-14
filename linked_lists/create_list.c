/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 03:02:15 by omputle           #+#    #+#             */
/*   Updated: 2019/09/13 16:31:48 by omputle          ###   ########.fr       */
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

t_node			*create_list(int n, char **av)
{
	int		count;
	int		j;
	char	**arr;
	t_node	*start;
	t_node	*temp;

	start = NULL;
	count = 0;
	while (count < n)
	{
		arr = ft_strsplit(av[count + 1], ' ');
		j = 0;
		while (arr[j] != NULL)
		{
			if (ft_isnum(arr[j]) == 0)
				return (NULL);
			temp = create_node(arr[j]);
			if (start == NULL)
				start = temp;
			else
				add_end(&start, temp);
			delete_node(&temp);
			j++;
		}
		ft_del_arr(arr);
		count++;
	}
	return (start);
}
