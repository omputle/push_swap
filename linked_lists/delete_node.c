/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:16:55 by omputle           #+#    #+#             */
/*   Updated: 2019/08/31 09:07:24 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	delete_node(node **start)
{
	node	*ptr;

	ptr = (*start);
	if ((*start)->next)
	{
		(*start) = (*start)->next;
		(*start)->prev = NULL;
		free(ptr);
	}
	else
	{
		(*start) = NULL;
	}
}
