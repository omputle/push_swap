/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:58 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 16:04:34 by omputle          ###   ########.fr       */
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

int		main(int ac, char **av)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	if (ac == 1)
		ft_putendl("Error");
	else if (ac > 1)
	{
		stack_a = create_list(ac - 1, av);
		if (is_sorted(&stack_a) == 0)
		{
			if (ac == 2)
				return (0);
			else if (ac == 4)
				sort_three(&stack_a);
			else if (ac == 6)
				sort_five(&stack_a, &stack_b);
			else if (ac > 6)
				sort_hundred(&stack_a, &stack_b);
		}
		ft_putendl("Stack A");
		display_list(stack_a);
		ft_putendl("Stack B");
		display_list(stack_b);
//		delete_list(&stack_a);
//		delete_list(&stack_b);
	}
	return (0);
}
