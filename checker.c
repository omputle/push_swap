/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:31 by omputle           #+#    #+#             */
/*   Updated: 2019/08/29 15:14:41 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_list(node **start)
{
	node	*ptr;
	node	*preptr;

	ptr = (*start)->next;
	preptr = (*start);
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

void	execute_rule(char *str, node **stack_A, node **stack_B)
{
	if (ft_strcmp("sa", str) == 0)
		sa(stack_A);
	else if (ft_strcmp("sb", str) == 0)
		sb(stack_B);
	else if (ft_strcmp("ss", str) == 0)
	{
		sa(stack_A);
		sb(stack_B);
	}
	else if (ft_strcmp("ra", str) == 0)
		ra(stack_A);
	else if (ft_strcmp("rb", str) == 0)
		rb(stack_B);
	else if (ft_strcmp("rr", str) == 0)
	{
		ra(stack_A);
		rb(stack_B);
	}
	else if (ft_strcmp("rra", str) == 0)
		rra(stack_A);
	else if (ft_strcmp("rrb", str) == 0)
		rrb(stack_B);
	else if (ft_strcmp("rrr", str) == 0)
	{
		rra(stack_A);
		rrb(stack_B);
	}
	else if (ft_strcmp("pa", str) == 0)
		pa(stack_B, stack_A);
	else if (ft_strcmp("pb", str) == 0)
		pb(stack_A, stack_B);
}

void	read_rules(char *line, node **stack_A, node **stack_B)
{
	while (get_next_line(0, &line) == 1)
	{
		execute_rule(line, stack_A, stack_B);
	}
}

int		main(int ac, char **av)
{
	char	*line;
	int		n;
	node	*stack_A = NULL;
	node	*stack_B = NULL;
	
	line = NULL;
	if (ac == 1)
	{
		ft_putendl("Error");
		return (0);
	}
	if (ac > 1)
	{
		n = ac - 1;
		stack_A = create_list(n, av);
		if (stack_A == NULL)
		{
			ft_putendl("Error");
			return (0);
		}
		read_rules(line, &stack_A, &stack_B);
		display_list(stack_A);
		display_list(stack_B);
		if ((check_list(&stack_A) == 1) && (stack_B) == NULL)
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	free(stack_A);
	free(stack_B);
	return (0);
}
