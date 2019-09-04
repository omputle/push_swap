/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:21:09 by omputle           #+#    #+#             */
/*   Updated: 2019/08/31 09:06:57 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	add_node(node **start, int data)
{
	node	*ptr;

	ptr = (node*)malloc(sizeof(node) * 1);
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
