# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omputle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/02 09:33:40 by omputle           #+#    #+#              #
#    Updated: 2019/09/14 00:22:59 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rules.a

CC = gcc

SRC =	pa.c \
		pb.c \
		push.c \
		push_a.c \
		push_b.c \
		ra.c \
		rb.c \
		reverse_rotate.c \
		rotate.c \
		rr.c \
		rra.c \
		rrb.c \
		rrr.c \
		sa.c \
		sb.c \
		ss.c \
		swap.c \
		swap_both.c \
		rotate_both.c \
		reverse_rotate_both.c \

OBJECT =	pa.o \
			pb.o \
			push.o \
			push_a.o \
			push_b.o \
			ra.o \
			rb.o \
			reverse_rotate.o \
			rotate.o \
			rr.o \
			rra.o \
			rrb.o \
			rrr.o \
			sa.o \
			sb.o \
			ss.o \
			swap.o \
			swap_both.o \
			rotate_both.o \
			reverse_rotate_both.o \

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

run:
		$(CC) $(FLAGS) $(NAME) main.c -o test
		./test

norm:
		Norminette -R CheckForbiddenSourceHeader
