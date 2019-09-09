/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:24:15 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 10:20:53 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		repeats(t_node **stack)
{
	t_node	*ptr;
	t_node	*temp;
	int		data;
	int		len;

	len = list_length(stack);
	data = (*stack)->element;
	ptr = (*stack)->next;
	while (len > 1)
	{
		temp = ptr;
		while (ptr)
		{
			if (data == ptr->element)
				return (1);
			ptr = ptr->next;
		}
		ptr = temp->next;
		data = temp->element;
		len--;
	}
	return (0);
}
