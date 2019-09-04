/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 03:02:15 by omputle           #+#    #+#             */
/*   Updated: 2019/08/31 09:07:11 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

node	*create_list(int n, char **av)
{
	int		count = 0;
	int		data;
	node	*start = NULL;
	node	*temp;
	node	*ptr;
	while (count < n)
	{
		temp = (node*)malloc(sizeof(node) * 1);
		if (ft_isnum(av[count + 1]) == 0)
			return (NULL);
		data = ft_atoi(av[count + 1]);
		if (start == NULL)
		{
			temp->prev = NULL;
			temp->element = data;
			start = temp;
			temp->next = NULL;
		}
		else
		{
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = temp;
			temp->prev = ptr;
			temp->element = data;
			temp->next = NULL;
		}
		count++;
	}
	return (start);
}
