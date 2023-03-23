# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 02:44:56 by malancar          #+#    #+#              #
#    Updated: 2023/03/23 04:05:35 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc

RM	= rm -f

NAME	= push_swap

CFLAGS	= -Wextra -Werror -Wall -g

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
DEPS = $(SRC:.c=.d)

HEADER = push_swap.h

all:	$(NAME)

$(NAME):	 $(OBJ) $(HEADER)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) -MMD -c  $< -o $@

clean:
	@$(RM) $(OBJ) $(DEPS)

fclean: clean
	@$(RM) $(NAME) $(DEPS)

re:	fclean all

-include : $(DEPS)

.PHONY: all clean fclean re
