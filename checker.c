/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:31 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 00:27:01 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	execute_rule(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp("sa", str) == 0)
		sa(stack_a);
	else if (ft_strcmp("sb", str) == 0)
		sb(stack_b);
	else if (ft_strcmp("ss", str) == 0)
	{
		sa(stack_a);
		sb(stack_b);
	}
	else if (ft_strcmp("ra", str) == 0)
		ra(stack_a);
	else if (ft_strcmp("rb", str) == 0)
		rb(stack_b);
	else if (ft_strcmp("rr", str) == 0)
	{
		ra(stack_a);
		rb(stack_b);
	}
	else if (ft_strcmp("rra", str) == 0)
		rra(stack_a);
	else if (ft_strcmp("rrb", str) == 0)
		rrb(stack_b);
	else if (ft_strcmp("rrr", str) == 0)
	{
		rra(stack_a);
		rrb(stack_b);
	}
	else if (ft_strcmp("pa", str) == 0)
		pa(stack_b, stack_a);
	else if (ft_strcmp("pb", str) == 0)
		pb(stack_a, stack_b);
}

void	read_rules(char *line, t_node **stack_a, t_node **stack_b)
{
	while (get_next_line(0, &line) == 1)
	{
		execute_rule(line, stack_a, stack_b);
	}
}

int		main(int ac, char **av)
{
	char	*line;
	int		n;
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	
	line = NULL;
	if (ac == 1)
	{
		ft_putendl("Error");
		return (0);
	}
	if (ac > 1)
	{
		n = ac - 1;
		stack_a = create_list(n, av);
		if (stack_a == NULL)
		{
			ft_putendl("Error");
			return (0);
		}
		read_rules(line, &stack_a, &stack_a);
		display_list(stack_a);
		display_list(stack_b);
		if ((check_list(&stack_a) == 1) && (stack_b) == NULL)
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
