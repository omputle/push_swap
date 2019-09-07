/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:58 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 09:17:12 by omputle          ###   ########.fr       */
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

void	find_min(t_node **stack_a)
{
	t_node	*ptr;
	int		data;
	int		count = 2;
	int		pos = 1;

	if ((*stack_a)->next && (*stack_a)->next->next && (*stack_a)->next->next->next)
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
		if (pos == 1)
			return ;
		else if (pos == 2)
			sa(stack_a);
		else if (pos <= mid_point(count))
		{
			while (pos > 1)
			{
				ra(stack_a);
				pos--;
			}
		}
		else
		{
			while (pos < count)
			{
				rra(stack_a);
				pos++;
			}
		}
	}
}

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->element > (*stack_a)->next->element)
	{
		sa(stack_a);
	}
}

void	sort_four(t_node **stack_A, t_node **stack_B)
{
	find_min(stack_A);
	ft_putendl("pb");
	pb(stack_A, stack_B);
	sort_three(stack_A);
	ft_putendl("pa");
	pa(stack_B, stack_A);
}

void	sort_any(t_node **stack_A, t_node **stack_B, int num)
{
	int		push;
	push = num;
	while (push > 3)
	{
		find_min(stack_A);
//		if (is_sorted(stack_A) == 1)
//			break ;
		ft_putendl("pb");
		pb(stack_A, stack_B);
		push--;
	}
	sort_three(stack_A);
	while (push < num)
	{
		ft_putendl("pa");
		pa(stack_B, stack_A);
		push++;
	}
}

int		main(int ac, char **av)
{
	t_node	*stack_A = NULL;
	t_node	*stack_B = NULL;

	if (ac == 1)
		ft_putendl("Error");
	else if (ac > 1)
	{
		stack_A = create_list(ac - 1, av);
		display_list(stack_A);
		if (is_sorted(&stack_A) == 0)
		{
			if (ac == 3)
				sort_two(&stack_A);
			else if (ac == 4)
				sort_three(&stack_A);
			else if (ac == 5)
				sort_four(&stack_A, &stack_B);
			else if (ac == 6)
				sort_five(&stack_A, &stack_B);
			else if (ac > 6)
				sort_any(&stack_A, &stack_B, ac - 1);
		}
		ft_putendl("Stack A");
		display_list(stack_A);
		ft_putendl("Stack B");
		display_list(stack_B);
	}
	return (0);
}
