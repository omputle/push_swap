/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:13:56 by omputle           #+#    #+#             */
/*   Updated: 2019/09/06 22:50:02 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

int		list_length(t_node **list)
{
	int		len;
	t_node	*ptr;

	ptr = (*list);
	len = 0;
	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
