/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:01:39 by omputle           #+#    #+#             */
/*   Updated: 2019/09/15 10:08:18 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function takes in a stack and a node position that needs to go to the top of the stack
 * The function then determines which move (rra and ra) will use the leas amount of moves
 * Then the node is moved to the top*/
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
