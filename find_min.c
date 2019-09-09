/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:13:14 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 17:14:24 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
