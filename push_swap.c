/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:58 by omputle           #+#    #+#             */
/*   Updated: 2019/08/28 09:01:35 by omputle          ###   ########.fr       */
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

int		is_sorted(node **stack_A)
{
	node	*ptr;
	node	*preptr;

	ptr = (*stack_A)->next;
	preptr = (*stack_A);
	if (ptr)
	{
		while (ptr)
		{
			if (ptr->element < preptr->element)
				return (0);
			preptr = ptr;
			ptr = ptr->next;
		}
	}
	return (1);
}

void	find_min(node **stack_A)
{
	node	*ptr;
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
			ft_putendl("sa");
			sa(stack_A);
		}
		else if (pos <= mid_point(count))
		{
			while (pos > 1)
			{
				ft_putendl("ra");
				ra(stack_A);
				pos--;
			}
		}
		else
		{
			while (pos < count)
			{
				ft_putendl("rra");
				rra(stack_A);
				pos++;
			}
		}
	}
}

void	sort_two(node **stack_A)
{
	if ((*stack_A)->element > (*stack_A)->next->element)
	{
		ft_putendl("sa");
		sa(stack_A);
	}
}

void	sort_three(node **stack_A)
{
	int		first = (*stack_A)->element;
	int		second = (*stack_A)->next->element;
	int		third = (*stack_A)->next->next->element;
	
	if ((first > second) && (second > third) && (third < first))
	{
		ft_putendl("sa");
		sa(stack_A);
		ft_putendl("rra");
		rra(stack_A);
	}
	else if ((first > second) && (second < third) && (third < first))
	{
		ft_putendl("ra");
		ra(stack_A);
	}
	else if ((first > second) && (second < third) && (third > first))
	{
		ft_putendl("sa");
		sa(stack_A);
	}
	else if ((first < second) && (second > third) && (third < first))
	{
		ft_putendl("rra");
		rra(stack_A);
	}
	else if ((first < second) && (second > third) && (third > first))
	{
		ft_putendl("rra");
		rra(stack_A);
		ft_putendl("sa");
		sa(stack_A);
	}
}

void	sort_five(node **stack_A, node **stack_B)
{
	find_min(stack_A);
	ft_putendl("pb");
	pb(stack_A, stack_B);
	find_min(stack_A);
	pb(stack_A, stack_B);
	ft_putendl("pb");
	sort_three(stack_A);
	ft_putendl("pa");
	pa(stack_B, stack_A);
	ft_putendl("pa");
	pa(stack_B, stack_A);
}

void	sort_four(node **stack_A, node **stack_B)
{
	find_min(stack_A);
	ft_putendl("pb");
	pb(stack_A, stack_B);
	sort_three(stack_A);
	ft_putendl("pa");
	pa(stack_B, stack_A);
}

void	sort_any(node **stack_A, node **stack_B, int num)
{
	int		push;
	push = num;
	while (push > 3)
	{
		find_min(stack_A);
		if (is_sorted(stack_A) == 1)
			break ;
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
/*
int		cycle_detector(node **stack_A)
{
	node	*p1;
	node	*p2;

	p1 = (*stack_A);
	while (p1)
	{
		p2 = p1->next;
		while (p2)
		{
			if (p2->element == p1->element)
				return (1);
			p2 = p2->next;
		}
		p1 = p1->next;
	}
	return (0);
}*/

int		main(int ac, char **av)
{
	node	*stack_A = NULL;
	node	*stack_B = NULL;

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
