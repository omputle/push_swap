/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:43:30 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 09:56:12 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	swap(node **start)
{
	node	*ptr;
	node	*preptr;
	int		data;

	if ((*start) != NULL || (*start)->next != NULL)
	{
		/* declarations of the pointers I created */
		/*ptr = start->next;
		preptr = start;
		temp = ptr->next;
		 swapping
		ptr->next = preptr;
		preptr->next = temp;
		start = ptr;*/
		ptr = (*start)->next;
		preptr = (*start);
		data = ptr->element;
		ptr->element = preptr->element;
		preptr->element = data;
	}
}
