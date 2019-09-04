/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 08:53:06 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 11:31:06 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H

# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"

typedef	struct	node
{
	struct	node	*prev;
	int				element;
	struct	node	*next;
}					node;

void	add_node(node **start, int data);
node	*create_list(int n, char **av);
void	delete_node(node **start);
void	display_list(node *head);

#endif
