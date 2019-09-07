# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omputle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 02:52:32 by omputle           #+#    #+#              #
#    Updated: 2019/09/07 02:39:14 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = rules/rotate.c \
	  rules/reverse_rotate.c \
	  rules/swap.c \
	  linked_lists/create_list.c \
	  linked_lists/display_list.c \
	  linked_lists/list_length.c \
	  linked_lists/delete_list.c \
	  rules/push.c \
	  linked_lists/add_node.c \
	  linked_lists/delete_node.c \
	  rules/sa.c \
	  rules/sb.c \
	  rules/ss.c \
	  rules/ra.c \
	  rules/rb.c \
	  rules/rr.c \
	  rules/rra.c \
	  rules/rrb.c \
	  rules/rrr.c \
	  rules/pa.c \
	  rules/pb.c \
	  sort.c \
	  get_next_line.c \

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: test

test: $(SRC)
	make -C libft/ && make -C linked_lists/ && make -C rules/
	$(CC) $(SRC) $(FLAGS) libft/libft.a linked_lists/linked_lists.a rules/rules.a -o test

fclean:
	rm -r test
	make -C libft/ fclean
	make -C linked_lists/ fclean
	make -C rules/ fclean

norm:
	norminette -R CheckForbiddenSourceHeader