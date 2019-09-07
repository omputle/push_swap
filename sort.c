/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 02:41:32 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		mid_point(int n)
{
	int	temp;

	temp = 0;
	if (n % 2 != 0)
		n = n + 1;
	temp = n / 2;
	return (temp);
}

int		find_node(t_node **stack_a, int check)
{
	t_node	*ptr;
	int		pos;

	pos = 0;
	if (list_length(stack_a) < 1)
		return (0);
	ptr = (*stack_a);
	while (ptr)
	{
		pos++;
		if (ptr->element < check)
			break ;
		ptr = ptr->next;
	}
	if (pos == 0)
		return (0);
	else if (pos == 1)
		return (1);
	else if (pos == 2)
	{
		sa(stack_a);
		return (1);
	}
	else if (pos <= mid_point(list_length(stack_a)))
	{
		while (pos > 1)
		{
			ra(stack_a);
			pos--;
		}
		return (1);
	}
	else
	{
		while (pos < list_length(stack_a) + 1)
		{
			rra(stack_a);
			pos++;
		}
		return (1);
	}
}

int		find_min(t_node **stack)
{
	int		max;
	t_node	*ptr;

	ptr = (*stack);
	max = ptr->element;
	while (ptr)
	{
		if (max > ptr->element)
			max = ptr->element;
		ptr = ptr->next;
	}
	return (max);
}

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

void	bring_back(t_node **stack_b)
{
	t_node	*ptr;
	int		data;
	int		count = 2;
	int		pos = 1;

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
		if (pos == 1)
			return ;
		else if (pos == 2)
		{
			sb(stack_b);
		}
		else if (pos <= mid_point(count))
		{
			while (pos > 1)
			{
				rb(stack_b);
				pos--;
			}
		}
		else
		{
			while (pos < count)
			{
				rrb(stack_b);
				pos++;
			}
		}
	}
}

void	sort_100(t_node **stack_a, t_node **stack_b)
{
	int		min;
	int		max;
	int		chunk_size;
	int		chunk_num;
	int		div;

	div = 10;
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
	ft_putendl("Stack A");
	display_list(*stack_a);
	ft_putendl("Stack B");
	display_list(*stack_b);
	ft_putchar('\n');
	while (list_length(stack_b) > 0)
	{
		bring_back(stack_b);
		pa(stack_b, stack_a);
	}
}

int		main(int ac, char **av)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	if (ac > 1)
	{
		stack_a = create_list(ac - 1, av);
		sort_100(&stack_a, &stack_b);
//		find_node(&stack_A, 5);
		ft_putchar('\n');
		ft_putendl("Stack A");
		display_list(stack_a);
		ft_putendl("Stack B");
		display_list(stack_b);
		delete_list(&stack_a);
//		delete_list(&stack_b);
	}
	return (0);
}









