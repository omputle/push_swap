/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:34:16 by omputle           #+#    #+#             */
/*   Updated: 2019/09/10 16:22:37 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"
# include "linked_lists/linked_lists.h"
# include "rules/rules.h"

int		is_sorted(t_node **start);
void	sort_three(t_node **stack_a);
void	sort_five(t_node **stack_a, t_node **stack_b);
void	sort(t_node **stack_a, t_node **stack_b, int div);
int		repeats(t_node **stack);
int		find_max(t_node **stack);
int		find_min(t_node **stack);
int		mid_point(int n);
void	move_node(t_node **stack, int pos);
t_node	*last_node(t_node **stack);
int		find_node_any(t_node **stack, int check);

#endif
