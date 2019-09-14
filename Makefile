# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omputle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 02:52:32 by omputle           #+#    #+#              #
#    Updated: 2019/09/14 03:03:53 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker

SRC1 = is_sorted.c \
	  find_min.c \
	  find_max.c \
	  mid_point.c \
	  move_node.c \
	  last_node.c \
	  find_node_any.c \
	  sort.c \
	  push_swap.c \
	  sort_three.c \
	  sort_five.c \
	  get_next_line.c \

SRC2 = 	checker.c \
	  	get_next_line.c \
		repeats.c \
		is_sorted.c \

CC = gcc -Wall -Werror -Wextra -o


all: $(NAME1) $(NAME2)


$(NAME1): lib
		$(CC) $(NAME1) libft/libft.a linked_lists/linked_lists.a rules/rules.a $(SRC1)

$(NAME2): 
		$(CC) $(NAME2) libft/libft.a linked_lists/linked_lists.a rules/rules.a $(SRC2)

lib:
		make -C libft/ && make -C linked_lists/ && make -C rules/



fclean:
	make -C libft/ fclean
	make -C linked_lists/ fclean
	make -C rules/ fclean
	rm -r $(NAME1) $(NAME2)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader
