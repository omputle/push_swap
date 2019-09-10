/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:58 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 09:20:41 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		ft_putendl("Error");
	else if (ac > 1)
	{
		stack_a = create_list(ac - 1, av);
		if (is_sorted(&stack_a) == 0)
		{
			if (ac == 4)
				sort_three(&stack_a);
			else if (ac == 6)
				sort_five(&stack_a, &stack_b);
			else if (ac > 6 && ac < 500)
				sort(&stack_a, &stack_b, 5);
			else if (ac >= 500)
				sort(&stack_a, &stack_b, 11);
		}
	}
	display_list(stack_a);
	return (0);
}
