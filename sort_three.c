/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 06:39:53 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 08:20:25 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	int		first;
	int		second;
	int		third;

	first = (*stack_a)->element;
	second = (*stack_a)->next->element;
	third = (*stack_a)->next->next->element;
	if ((first > second) && (second > third) && (third < first))
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((first > second) && (second < third) && (third < first))
		ra(stack_a);
	else if ((first > second) && (second < third) && (third > first))
		sa(stack_a);
	else if ((first < second) && (second > third) && (third < first))
		rra(stack_a);
	else if ((first < second) && (second > third) && (third > first))
	{
		rra(stack_a);
		sa(stack_a);
	}
}
