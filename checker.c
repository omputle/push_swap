/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:31 by omputle           #+#    #+#             */
/*   Updated: 2019/09/12 11:38:10 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	execute_rule(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp("sa", str) == 0)
		swap(stack_a);
	else if (ft_strcmp("sb", str) == 0)
		swap(stack_b);
	else if (ft_strcmp("ss", str) == 0)
		swap_both(stack_a, stack_b);
	else if (ft_strcmp("ra", str) == 0)
		rotate(stack_a);
	else if (ft_strcmp("rb", str) == 0)
		rotate(stack_b);
	else if (ft_strcmp("rr", str) == 0)
		rotate_both(stack_a, stack_b);
	else if (ft_strcmp("rra", str) == 0)
		reverse_rotate(stack_a);
	else if (ft_strcmp("rrb", str) == 0)
		reverse_rotate(stack_b);
	else if (ft_strcmp("rrr", str) == 0)
		reverse_rotate_both(stack_a, stack_b);
	else if (ft_strcmp("pa", str) == 0)
		push(stack_b, stack_a);
	else if (ft_strcmp("pb", str) == 0)
		push(stack_a, stack_b);
}

void	read_rules(t_node **stack_a, t_node **stack_b)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) == 1)
	{
		execute_rule(line, stack_a, stack_b);
		free(line);
		line = NULL;
	}
}

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		stack_a = create_list(ac - 1, av);
		if (repeats(stack_a) == 1 || stack_a == NULL)
		{
			ft_putendl("Error");
			return (0);
		}
		read_rules(&stack_a, &stack_a);
		if ((is_sorted(&stack_a) == 1) && (stack_b) == NULL)
			ft_putendl("OK");
		else
			ft_putendl("KO");
		display_list(stack_a);
	}
	else
		ft_putendl("Error");
	return (0);
}
