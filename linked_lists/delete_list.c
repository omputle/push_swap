/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:30:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 06:34:25 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

static t_node	*delete_begin(t_node **list)
{
	t_node	*ptr;

	ptr = (*list);
	if (ptr)
	{
		(*list) = (*list)->next;
		(*list)->prev = NULL;
		free(ptr);
	}
	return (*list);
}

void		delete_list(t_node **list)
{
	t_node	*temp;

	temp = (*list);
	if (*list)
	{
		while (*list)
			*list = delete_begin(list);
	}
}
