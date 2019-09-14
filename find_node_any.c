/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node_any.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:21:30 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 01:59:16 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		find_pos(t_node **stack, int pos1, int pos2)
{
	int		pos;

	if (pos2 < pos1)
		return (0);
	else if (pos1 - 1 <= list_length(stack) + 1 - pos2)
		pos = pos1;
	else
		pos = pos2;
	return (pos);
}

static int		node_top(t_node **stack, int check)
{
	t_node	*ptr;
	int		pos1;

	pos1 = 0;
	ptr = (*stack);
	while (ptr)
	{
		pos1++;
		if (ptr->element < check)
			break ;
		ptr = ptr->next;
	}
	return (pos1);
}

static int		node_bottom(t_node **stack, int check)
{
	t_node	*ptr;
	int		pos2;

	ptr = last_node(stack);
	pos2 = list_length(stack);
	while (ptr)
	{
		if (ptr->element < check)
			break ;
		ptr = ptr->prev;
		pos2--;
	}
	return (pos2);
}

int				find_node_any(t_node **stack, int check)
{
	int		pos1;
	int		pos2;
	int		pos;

	if (list_length(stack) < 1)
		return (0);
	pos1 = node_top(stack, check);
	pos2 = node_bottom(stack, check);
	if ((pos = find_pos(stack, pos1, pos2)) == 0)
		return (0);
	move_node(stack, pos);
	return (1);
}
