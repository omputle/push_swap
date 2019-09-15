/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:43:04 by omputle           #+#    #+#             */
/*   Updated: 2019/09/15 09:34:31 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function returns a pointer to the last node of the linked list*/

t_node	*last_node(t_node **stack)
{
	t_node	*ptr;

	ptr = (*stack);
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
