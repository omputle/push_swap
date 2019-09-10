/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:30:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 17:15:22 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

static t_node	**delete_beg(t_node **list)
{
	t_node	*ptr;

	ptr = (*list);
	(*list) = (*list)->next;
	(*list)->prev = NULL;
	free(ptr);
	return (list);
}

void			delete_list(t_node **list)
{
	if (*list)
	{
		while ((*list) != NULL)
		{
			list = delete_beg(list);
		}
	}
}
