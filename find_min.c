/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:13:14 by omputle           #+#    #+#             */
/*   Updated: 2019/09/15 09:35:55 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function returns the minimum value in a linked list*/

int		find_min(t_node **stack)
{
	int		min;
	t_node	*ptr;

	ptr = (*stack);
	min = ptr->element;
	while (ptr)
	{
		if (min > ptr->element)
			min = ptr->element;
		ptr = ptr->next;
	}
	return (min);
}
