/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:25:52 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 00:21:53 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "../linked_lists/linked_lists.h"

void	pa(t_node **stack_b, t_node **stack_a);
void	pb(t_node **stack_a, t_node **stack_b);
void	push(t_node **pusher, t_node **taker);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	reverse_rotate(t_node **start);
void	rotate(t_node **start);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_a);
void	rrr(t_node **stack_a, t_node **stack_b);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	swap(t_node **start);
void	swap_both(t_node **stack_a, t_node **stack_b);
void	rotate_both(t_node **stack_a, t_node **stack_b);
void	reverse_rotate_both(t_node **stack_a, t_node **stack_b);
void	push_a(t_node **stack_b, t_node **stack_a);
void	push_b(t_node **stack_a, t_node **stack_b);

#endif
