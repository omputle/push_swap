/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:16:09 by omputle           #+#    #+#             */
/*   Updated: 2019/09/15 09:38:15 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function calculates the median of a list*/

int		mid_point(int n)
{
	int	temp;

	temp = 0;
	if (n % 2 != 0)
		n = n + 1;
	temp = n / 2;
	return (temp);
}
