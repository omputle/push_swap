/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 06:40:55 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 07:05:32 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		mid_point(int n)
{
	int	temp;

	temp = 0;
	if (n % 2 != 0)
		n = n + 1;
	temp = n / 2;
	return (temp);
}

static void	find_min(t_node **stack_A)
{
	t_node	*ptr;
	int		data;
	int		count = 2;
	int		pos = 1;

	if ((*stack_A)->next && (*stack_A)->next->next && (*stack_A)->next->next->next)
	{
		ptr = (*stack_A)->next;
		data = (*stack_A)->element;
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
		if (pos == 1)
			return ;
		else if (pos == 2)
		{
			sa(stack_A);
		}
		else if (pos <= mid_point(count))
		{
			while (pos > 1)
			{
				ra(stack_A);
				pos--;
			}
		}
		else
		{
			while (pos < count)
			{
				rra(stack_A);
				pos++;
			}
		}
	}
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	find_min(stack_a);
	pb(stack_a, stack_b);
	find_min(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
