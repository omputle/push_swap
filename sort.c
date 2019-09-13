/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/13 15:55:12 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_top(t_node **stack, int pos)
{
	int		len;

	len = list_length(stack);
	if (pos == 1)
		return ;
	else if (pos == 2)
		sb(stack);
	else if (pos <= mid_point(len))
	{
		while (pos > 1)
		{
			rb(stack);
			pos--;
		}
	}
	else
	{
		while (pos < len + 1)
		{
			rrb(stack);
			pos++;
		}
	}
}

static void	bring_back(t_node **stack_b)
{
	t_node	*ptr;
	int		data;
	int		count;
	int		pos;

	count = 2;
	pos = 1;
	if ((*stack_b))
	{
		ptr = (*stack_b)->next;
		data = (*stack_b)->element;
		while (ptr)
		{
			if (data < ptr->element)
			{
				data = ptr->element;
				pos = count;
			}
			ptr = ptr->next;
			count++;
		}
		move_to_top(stack_b, pos);
	}
}

void	sort(t_node **stack_a, t_node **stack_b, int div)
{
	int		min;
	int		max;
	int		c_size;
	int		c_num;

	min = find_min(stack_a);
	max = find_max(stack_a);
	c_size = ((max - min) / div) + 1;
	c_num = 1;
	while (c_num <= div)
	{
		while (find_node_any(stack_a, min + c_size * c_num) == 1)
		{
			if (list_length(stack_a) == 0)
				break ;
			pb(stack_a, stack_b);
		}
		c_num++;
	}
	while (list_length(stack_b) > 0)
	{
		bring_back(stack_b);
		pa(stack_b, stack_a);
	}
}
