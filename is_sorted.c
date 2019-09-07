/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:45:03 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 07:07:58 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_node **start)
{
	t_node	*ptr;
	t_node	*preptr;

	ptr = (*start)->next;
	preptr = (*start);
	if (ptr)
	{
		while (ptr)
		{
			if (ptr->element < preptr->element)
				return (0);
			preptr = ptr;
			ptr = ptr->next;
		}
	}
	return (1);
}
