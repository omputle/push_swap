/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:12:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/09 11:56:10 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	push(t_node **pusher, t_node **taker)
{
	t_node	*ptr;

	ptr = (*pusher)->next;
	(*pusher)->next = (*taker);
	(*taker)->prev = (*pusher);
	ptr->prev = NULL;
	(*taker) = (*pusher);
	(*pusher) = ptr;
}
