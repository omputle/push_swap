/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:14:59 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 17:15:38 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_max(t_node **stack)
{
	int		max;
	t_node	*ptr;

	ptr = (*stack);
	max = ptr->element;
	while (ptr)
	{
		if (max < ptr->element)
			max = ptr->element;
		ptr = ptr->next;
	}
	return (max);
}
