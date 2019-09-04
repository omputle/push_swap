/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/03 12:05:19 by omputle          ###   ########.fr       */
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

int		find_min(node **stack)
{
	int		min;
	node	*ptr;

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

int		find_max(node **stack)
{
	int		max;
	node	*ptr;

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

/*void	sort_100(node **stack_A, node **stack_B, int num)
{
	int		min;
	int		max;

	min = find_min(stack_A);
	max = find_max(stack_A);
}*/

int		main(int ac, char **av)
{
	int		min;
	int		max;
	node	*stack_A = NULL;
	if (ac > 1)
	{
		stack_A = create_list(ac - 1, av);
		max = find_max(&stack_A);
		min = find_min(&stack_A);
		ft_putstr("Max : ");
		ft_putnbr(max);
		ft_putchar('\n');
		ft_putstr("Min : ");
		ft_putnbr(min);
	}
	return (0);
}









