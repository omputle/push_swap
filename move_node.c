/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:01:39 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 09:02:54 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_node(t_node **stack, int pos)
{
	int		len;

	len = list_length(stack);
	if (pos == 1)
		return ;
	else if (pos == 2)
		sa(stack);
	else if (pos <= mid_point(len))
	{
		while (pos > 1)
		{
			ra(stack);
			pos--;
		}
	}
	else
	{
		while (pos < len + 1)
		{
			rra(stack);
			pos++;
		}
	}
}
