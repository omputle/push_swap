/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:12:45 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 00:17:38 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	push(t_node **pusher, t_node **taker)
{
	int	data;

	data = (*pusher)->element;
	add_node(taker, data);
	delete_node(pusher);
}
