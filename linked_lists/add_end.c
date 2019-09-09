/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:41:51 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 10:13:08 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	add_end(t_node **start, int data)
{
	t_node	*ptr;
	t_node	*temp;

	ptr = (t_node*)malloc(sizeof(t_node) * 1);
	if ((*start) == NULL)
	{
		ptr->prev = NULL;
		ptr->element = data;
		ptr->next = NULL;
		(*start) = ptr;
	}
	else
	{
		temp = (*start);
		while (temp->next)
			temp = temp->next;
		ptr->element = data;
		temp->next = ptr;
		ptr->prev = temp;
		ptr->next = NULL;
	}
}
