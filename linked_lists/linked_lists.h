/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 08:53:06 by omputle           #+#    #+#             */
/*   Updated: 2019/09/07 02:37:29 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H

# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"

typedef	struct		s_list
{
	struct s_list	*prev;
	int				element;
	struct s_list	*next;
}					t_node;

void	add_node(t_node **start, int data);
t_node	*create_list(int n, char **av);
void	delete_node(t_node **start);
void	display_list(t_node *head);
int		list_length(t_node **list);
void	delete_list(t_node **list);

#endif
