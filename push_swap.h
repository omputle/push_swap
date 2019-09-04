/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:34:16 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 15:36:35 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"
# include "linked_lists/linked_lists.h"
# include "rules/rules.h"

typedef	struct	s_list
{
	int			A_moves;
	int			B_moves;
	int			tot_moves;
}				moves;

int     ft_isnum(char *str);
void	display_list(node *head);
void	swap(node **start);
void	rotate(node **start);
void	reverse_rotate(node **start);
node	*create_list(int n, char **av);
void	add_node(node **start, int data);
void	delete_node(node **start);
void	push(node **pusher, node **taker);
void	sa(node **stack_A);
void	sb(node **stack_B);
void	ss(node **stack_A, node **stack_B);
void	ra(node **stack_A);
void	rb(node **stack_B);
void	rr(node **stack_A, node **stack_B);
void    rra(node **stack_A);
void    rrb(node **stack_B);
void    rrr(node **stack_A, node **stack_B);
void    pa(node **stack_B, node **stack_A);
void    pb(node **stack_A, node **stack_B);

#endif
