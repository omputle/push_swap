/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:32:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 01:24:52 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*stack_A = NULL;
	t_node	*stack_B = NULL;
	int		n;
	if (ac > 1)
	{
		n = ac - 1;
		stack_A = create_list(n, av);
		display_list(stack_A);
		pb(&stack_A, &stack_B);
		pb(&stack_A, &stack_B);
//		sa(&stack_A);
//		ra(&stack_A);
//		pa(&stack_B, &stack_A);
//		ra(&stack_A);
//		delete_node(&stack_B);
		pa(&stack_B, &stack_A);
		ft_putendl("Stack A");
		display_list(stack_A);
		ft_putendl("Stack B");
		display_list(stack_B);
		free(stack_A);
//		free(stack_B);
	}
	return (0);
}
