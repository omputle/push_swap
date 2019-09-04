/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:25:52 by omputle           #+#    #+#             */
/*   Updated: 2019/09/02 09:33:31 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "../linked_lists/linked_lists.h"

void	pa(node **stack_B, node **stack_A);
void	pb(node **stack_A, node **stack_B);
void	push(node **pusher, node **taker);
void	ra(node **stack_A);
void	rb(node **stack_B);
void	reverse_rotate(node **start);
void	rotate(node **start);
void	rr(node **stack_A, node **stack_B);
void	rra(node **stack_A);
void	rrb(node **stack_B);
void	rrr(node **stack_A, node **stack_B);
void	sa(node **stack_A);
void	sb(node **stack_B);
void	ss(node **stack_A, node **stack_B);
void	swap(node **start);

#endif
