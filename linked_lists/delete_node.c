/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:16:55 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 08:13:21 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	delete_node(t_node **start)
{
	t_node	*ptr;

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
