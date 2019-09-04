/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:12:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 09:52:57 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	push(node **pusher, node **taker)
{
	int	data = (*pusher)->element;
	add_node(taker, data);
	delete_node(pusher);
}
