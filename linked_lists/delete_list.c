/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:30:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 02:40:55 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

static void	delete_begin(t_node **list)
{
	t_node	*ptr;

	ptr = (*list);
	if (ptr)
	{
		(*list) = (*list)->next;
		(*list)->prev = NULL;
		free(ptr);
	}
}

void		delete_list(t_node **list)
{
	while ((*list) != NULL)
		delete_begin(list);
}
