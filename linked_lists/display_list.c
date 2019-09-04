/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:28:07 by omputle           #+#    #+#             */
/*   Updated: 2019/08/31 09:07:40 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	display_list(node *start)
{
	node	*ptr;

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
