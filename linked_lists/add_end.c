/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:41:51 by omputle           #+#    #+#             */
/*   Updated: 2019/09/12 09:43:56 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	add_end(t_node **start, t_node *ptr)
{
	t_node	*temp;

	if ((*start) == NULL)
	{
		ptr->prev = NULL;
		ptr->next = NULL;
		(*start) = ptr;
	}
	else
	{
		temp = (*start);
		while (temp->next)
			temp = temp->next;
		temp->next = ptr;
		ptr->prev = temp;
		ptr->next = NULL;
	}
}
