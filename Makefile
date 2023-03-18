# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 02:44:56 by malancar          #+#    #+#              #
#    Updated: 2023/03/15 20:19:02 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc

RM	= rm -f

NAME	= push_swap

CFLAGS	= -Wextra -Werror -Wall

SRC		= ft_atoi.c			\
		  ft_split.c		\
		  ft_putstr.c		\
		  check.c			\
		  op1.c				\
		  op2.c				\
		  op3.c				\
		  sort.c			\
		  radix.c			\
		  push_swap_utils.c	\
		  init.c			\
		  free.c			\
		  push_swap.c

OBJ =	$(SRC:.c=.o)

HEADER = push_swap.h

all:	$(NAME)

$(NAME):	 $(OBJ) $(HEADER)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all fclean clean re
