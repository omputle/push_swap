/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 17:28:29 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_node(t_node **stack, int pos)
{
	int		len;

	len = list_length(stack);
	if (pos == 1)
		return ;
	else if (pos == 2)
		sa(stack);
	else if (pos <= mid_point(len))
	{
		while (pos > 1)
		{
			ra(stack);
			pos--;
		}
	}
	else
	{
		while (pos < len + 1)
		{
			rra(stack);
			pos++;
		}
	}
}

int		find_node(t_node **stack_a, int check)
{
	t_node	*ptr1;
	t_node	*ptr2;
	int		pos1;
	int		pos2;
	int		pos;

	pos1 = 0;
	pos2 = 0;
	pos = 0;
	if ((pos2 = list_length(stack_a)) < 1)
		return (0);
	ptr1 = (*stack_a);
	ptr2 = (*stack_a);
	while (ptr2->next)
	{
		if (ptr2->element < check)
			break ;
		ptr2 = ptr2->next;
		pos2--;
	}
	while (ptr1)
	{
		pos1++;
		if (ptr1->element < check)
			break ;
		ptr1 = ptr1->next;
	}
	if (pos2 < pos1)
		return (0);
	else if (pos1 - 1 <= list_length(stack_a) + 1 - pos2)
		pos = pos1;
	else
		pos = pos2;
	if (pos == 0)
		return (0);
	else
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
	int		chunk_size;
	int		chunk_num;

	min = find_min(stack_a);
	max = find_max(stack_a);
	chunk_size = ((max - min) / div) + 1;
	chunk_num = 1;
	while (chunk_num <= div)
	{
		while (find_node(stack_a, min + chunk_size * chunk_num) == 1)
		{
			if (list_length(stack_a) == 0)
				break ;
			pb(stack_a, stack_b);
		}
		chunk_num++;
	}
	while (list_length(stack_b) > 0)
	{
		bring_back(stack_b);
		pa(stack_b, stack_a);
	}
}
