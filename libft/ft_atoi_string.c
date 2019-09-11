/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:28:44 by omputle           #+#    #+#             */
/*   Updated: 2019/09/11 11:36:52 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "libft.h"

/*int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_atoi_string(char *str)
{
	int		i;
	int		num;

	i = 0;
//	while (str[i])
//	{
		while (is_space(str[i]) == 1)
			i++;
		num = ft_atoi(&str[i]);
		while (str[i] == '-' || str[i] == '+' || ft_isdigit(str[i]))
			i++;
//	}
	return (num);
}*/

int		main(int ac, char **av)
{
	char	**arr;
	int		i = 0;
	if (ac == 2)
	{
		arr = ft_strsplit(av[1], ' ');
		while (arr[i] != NULL)
		{
			printf("%d\n", ft_atoi(arr[i]));
			i++;
		}
		free(arr);
	}
	return (0);
}
