# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omputle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/02 09:33:40 by omputle           #+#    #+#              #
#    Updated: 2019/09/02 11:16:28 by omputle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rules.a

CC = gcc

SRC =	pa.c \
		pb.c \
		push.c \
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

OBJECT =	pa.o \
			pb.o \
			push.o \
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