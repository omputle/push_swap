/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:21:09 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 11:24:49 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	add_node(t_node **start, int data)
{
	t_node	*ptr;

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
		ptr->element = data;
		(*start)->prev = ptr;
		ptr->next = (*start);
		ptr->prev = NULL;
		(*start) = ptr;
	}
}
