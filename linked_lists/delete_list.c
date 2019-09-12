/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:30:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/12 10:33:48 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void			delete_list(t_node **list)
{
	t_node	*current;
	t_node	*ptr;

	current = (*list);
	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	(*list) = NULL;
}
