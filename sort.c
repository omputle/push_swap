/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:15:00 by omputle           #+#    #+#             */
/*   Updated: 2019/09/15 09:52:34 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function is for movin the already located maximum value in stack_b to the top
 * It takes in the stack as well as the location of the maximum value
 * It then checks which move (between rb and rrb) will take the least amount of moves
 * Then it moves the number to the top*/

static void	move_to_top(t_node **stack, int pos)
{
	int		len;

	len = list_length(stack);
	if (pos == 1)
		return ;
	else if (pos == 2)
		sb(stack);
	else if (pos <= mid_point(len))
	{
		while (pos > 1)
		{
			rb(stack);
			pos--;
		}
	}
	else
	{
		while (pos < len + 1)
		{
			rrb(stack);
			pos++;
		}
	}
}

/*This is for pushing back the nodes from stact_b to stack_a
 * It starts by first locating the maximum value in a list as well as its location
 * It is the moved to the top of the list to be pushed to stack_a*/

static void	bring_back(t_node **stack_b)
{
	t_node	*ptr;
	int		data;
	int		count;
	int		pos;

	count = 2;
	pos = 1;
	if ((*stack_b))
	{
		ptr = (*stack_b)->next;
		data = (*stack_b)->element;
		while (ptr)
		{
			if (data < ptr->element)
			{
				data = ptr->element;
				pos = count;
			}
			ptr = ptr->next;
			count++;
		}
		move_to_top(stack_b, pos);
	}
}

/*This function sorts the numbers*/

void		sort(t_node **stack_a, t_node **stack_b, int div)
{
	int		min;
	int		max;
	int		c_size;
	int		c_num;

	min = find_min(stack_a); /*finds the min value of the stack*/
	max = find_max(stack_a); /*finds the max value of the stack*/
	c_size = ((max - min) / div) + 1; /*divides the range of values into chunks depending of the number of the length of the stack*/
	c_num = 1;
	while (c_num <= div)
	{
		while (find_node_any(stack_a, min + c_size * c_num) == 1) /*Calls finds_node_any function to move the appropriate number to the top of stack_a*/
		{
			if (list_length(stack_a) == 0)
				break ;
			pb(stack_a, stack_b); /*the apprpriate number is pushed to stack_b*/
		}
		c_num++;
	}
	/*This portion brings back the nodes from stack_b
	 * Using the "bring_back" function, the nodes are already ordered when they return to stack_a*/
	while (list_length(stack_b) > 0)
	{
		bring_back(stack_b);
		pa(stack_b, stack_a);
	}
}
