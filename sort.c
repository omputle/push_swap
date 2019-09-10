/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 12:25:25 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_pos(t_node **stack, int pos1, int pos2)
{
	int		pos;

	if (pos2 < pos1)
		return (0);
	else if (pos1 - 1 <= list_length(stack) + 1 - pos2)
		pos = pos1;
	else
		pos = pos2;
	return (pos);
}

int		find_node(t_node **stack_a, int check)
{
	t_node	*ptr;
	int		pos1;
	int		pos2;
	int		pos;

	pos1 = 0;
	if ((pos2 = list_length(stack_a)) < 1)
		return (0);
	ptr = last_node(stack_a);
	while (ptr)
	{
		if (ptr->element < check)
			break ;
		ptr = ptr->prev;
		pos2--;
	}
	ptr = (*stack_a);
	while (ptr)
	{
		pos1++;
		if (ptr->element < check)
			break ;
		ptr = ptr->next;
	}
	if ((pos = find_pos(stack_a, pos1, pos2) == 0))
		return (0);
	move_node(stack_a, pos);
	return (1);
}

void	move_to_top(t_node **stack, int pos)
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

void	bring_back(t_node **stack_b)
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
		while (find_node(stack_a, min + c_size * c_num) == 1)
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
