/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:31 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 10:32:04 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		execute_ruler(char *str, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp("sa", str) == 0 && str[2] == '\0')
		swap(stack_a);
	else if (ft_strcmp("sb", str) == 0 && str[2] == '\0')
		swap(stack_b);
	else if (ft_strcmp("ss", str) == 0 && str[2] == '\0')
		swap_both(stack_a, stack_b);
	else if (ft_strcmp("ra", str) == 0 && str[2] == '\0')
		rotate(stack_a);
	else if (ft_strcmp("rb", str) == 0 && str[2] == '\0')
		rotate(stack_b);
	else if (ft_strcmp("rr", str) == 0 && str[2] == '\0')
		rotate_both(stack_a, stack_b);
	else if (ft_strcmp("rra", str) == 0 && str[3] == '\0')
		reverse_rotate(stack_a);
	else if (ft_strcmp("rrb", str) == 0 && str[3] == '\0')
		reverse_rotate(stack_b);
	else if (ft_strcmp("rrr", str) == 0 && str[3] == '\0')
		reverse_rotate_both(stack_a, stack_b);
	else if (ft_strcmp("pa", str) == 0 && str[2] == '\0')
		push(stack_b, stack_a);
	else if (ft_strcmp("pb", str) == 0 && str[2] == '\0')
		push(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int		read_rules(t_node **stack_a, t_node **stack_b)
{
	char	*line;
	int		flag;

	line = NULL;
	while (get_next_line(0, &line) == 1)
	{
		if ((flag = execute_ruler(line, stack_a, stack_b)) == 0)
			break ;
		free(line);
		line = NULL;
	}
	if (flag == 0)
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	else if ((is_sorted(stack_a) == 1) && list_length(stack_b) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (1);
}

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		check;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if ((stack_a = create_list(ac - 1, av)) == NULL)
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		if (repeats(stack_a) == 1 || stack_a == NULL)
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		if ((check = read_rules(&stack_a, &stack_b)) == 0)
			return (0);
	}
	delete_list(&stack_a);
	delete_list(&stack_b);
	return (0);
}
