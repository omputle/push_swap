/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:28:07 by omputle           #+#    #+#             */
/*   Updated: 2019/09/06 22:49:29 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	display_list(t_node *start)
{
	t_node	*ptr;

	ptr = start;
	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			ft_putnbr(ptr->element);
			ft_putstr(" -> ");
			ptr = ptr->next;
		}
	}
	ft_putendl("NULL");
}
