# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omputle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/31 08:57:48 by omputle           #+#    #+#              #
#    Updated: 2019/09/14 07:44:01 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = linked_lists.a

CC = gcc

SRC = add_node.c \
	  display_list.c \
	  create_list.c \
	  delete_list.c \
	  delete_node.c \
	  list_length.c \
	  add_end.c \
	  arg_error.c \

OBJECT = add_node.o \
		 display_list.o \
		 create_list.o \
		 delete_list.o \
		 delete_node.o \
		 list_length.o \
		 add_end.o \
		 arg_error.o \

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		$(CC) -c $(FLAGS) $(SRC)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)

clean:
		rm -f $(OBJECT)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

run:
		$(CC) $(FLAGS) $(NAME) main.c -o test
		./test

norm:
		Norminette -R CheckForbiddenSourceHeader
