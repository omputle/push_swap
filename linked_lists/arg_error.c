/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 07:37:50 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 08:32:48 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

int		check_arr(char **arr)
{
	int		count;
	int		flag;

	count = 0;
	flag = 1;
	while (arr[count] != NULL)
	{
		flag = ft_isnum(arr[count]);
		if (flag == 0)
			return (0);
		count++;
	}
	return (1);
}

int		check_num(char **arr)
{
	long	num;
	int		count;

	num = 0;
	count = 0;
	while (arr[count] != NULL)
	{
		num = ft_atol(arr[count]);
		if (num >= 2147483647 || num <= -2147483648)
			return (0);
		count++;
	}
	return (1);
}

int		arg_error(char **arr)
{
	if (check_arr(arr) == 0 || check_num(arr) == 0)
		return (0);
	return (1);
}
