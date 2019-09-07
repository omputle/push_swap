/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:41:19 by omputle           #+#    #+#             */
/*   Updated: 2019/09/06 23:06:04 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rotate(t_node **start)
{
	t_node	*preptr;
	t_node	*ptr;
	int		data;

	if ((*start) != NULL || (*start)->next != NULL)
	{
		ptr = (*start)->next;
		preptr = (*start);
		data = preptr->element;
		while (ptr != NULL)
		{
			preptr->element = ptr->element;
			preptr = ptr;
			ptr = ptr->next;
		}
		preptr->element = data;
	}
}
