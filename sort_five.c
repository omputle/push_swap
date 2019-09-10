/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 06:40:55 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 09:04:42 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_min_val(t_node **stack_a)
{
	t_node	*ptr;
	int		data;
	int		count;
	int		pos;

	pos = 1;
	count = 2;
	if (list_length(stack_a) > 3)
	{
		ptr = (*stack_a)->next;
		data = (*stack_a)->element;
		while (ptr)
		{
			if (data > ptr->element)
			{
				data = ptr->element;
				pos = count;
			}
			ptr = ptr->next;
			count++;
		}
		move_node(stack_a, pos);
	}
}

void		sort_five(t_node **stack_a, t_node **stack_b)
{
	find_min_val(stack_a);
	pb(stack_a, stack_b);
	find_min_val(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
