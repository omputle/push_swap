/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:12:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 12:46:27 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	de_link(t_node **pusher, t_node **taker)
{
	t_node	*ptr;

	if ((*taker) == NULL)
	{
		(*taker) = (*pusher);
		(*pusher) = (*pusher)->next;
		(*pusher)->prev = NULL;
		(*taker)->next = NULL;
	}
	else if (*taker)
	{
		ptr = (*pusher);
		(*pusher) = (*pusher)->next;
		(*pusher)->prev = NULL;
		ptr->next = (*taker);
		(*taker)->prev = ptr;
		(*taker) = (*taker)->prev;
	}
}

void	push(t_node **pusher, t_node **taker)
{
	if ((*pusher)->next)
		de_link(pusher, taker);
	else if (*pusher)
	{
		(*pusher)->next = (*taker);
		(*taker)->prev = (*pusher);
		(*pusher) = NULL;
		(*taker) = (*taker)->prev;
	}
}
