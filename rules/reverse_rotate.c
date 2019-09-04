/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:42:01 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 09:53:47 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	reverse_rotate(node **start)
{
	node	*preptr;
	node	*ptr;
	int		last;

	if ((*start) != NULL || (*start)->next != NULL)
	{
		ptr = (*start)->next;
		preptr = (*start);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			preptr = ptr;
		}
		last = ptr->element;
		while (preptr != NULL)
		{
			ptr->element = preptr->element;
			ptr = preptr;
			preptr = preptr->prev;
		}
		ptr->element = last;
	}
}
