/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 16:31:38 by omputle           #+#    #+#             */
/*   Updated: 2019/07/26 16:40:10 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	display_list(node *start)
{
	node	*ptr = start;
	while (ptr != NULL)
	{
		ft_putnbr(ptr->element);
		ft_putstr(" -> ");
		ptr = ptr->next;
	}
	ft_putendl("NULL");
}

node	*create_list(int n, char **av)
{
	int		count = 0;
	int		data;
	node	*start = NULL;
	node	*temp;
	node	*ptr;
	while (count < n)
	{
		temp = (node*)malloc(sizeof(node) * 1);
		data = ft_atoi(av[count + 1]);
		temp->element = data;
		temp->next = NULL;
		if (start == NULL)
			start = temp;
		else
		{
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = temp;
		}
		count++;
	}
	return (start);
}

int		main(int ac, char **av)
{
	node	*start = NULL;
	int		n;
	if (ac > 1)
	{
		n = ac - 1;
		start = create_list(n, av);
		display_list(start);
	}
	return (0);
}
