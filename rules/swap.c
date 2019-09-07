/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:43:30 by omputle           #+#    #+#             */
/*   Updated: 2019/09/06 23:13:31 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	swap(t_node **start)
{
	t_node	*ptr;
	t_node	*preptr;
	int		data;

	if ((*start) != NULL || (*start)->next != NULL)
	{
		ptr = (*start)->next;
		preptr = (*start);
		data = ptr->element;
		ptr->element = preptr->element;
		preptr->element = data;
	}
}
