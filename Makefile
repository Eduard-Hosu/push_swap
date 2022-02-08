# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 18:22:39 by ehosu             #+#    #+#              #
#    Updated: 2022/02/07 12:46:38 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
HEADER = push_swap.h
SRCS = main.c stack_utils/handle_argv_errors.c stack_utils/stack.c stack_utils/stack_utils.c \
		stack_utils/stack_basic_operations.c stack_utils/array_operations.c \
		stack_rules/set_one.c stack_rules/set_two.c stack_utils/small_amount.c \
		stack_utils/bigger_amount.c stack_utils/push_value.c
OBJS = ${SRCS:.c=.o}
RM = rm -rf

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME):	$(OBJS)
	cd libft && ${MAKE}
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS) ./libft/libft.a

clean:
	cd libft && ${MAKE} clean
	${RM} ${OBJS} ./libft/libft.a

fclean: clean
	${RM} $(NAME)

re:	fclean all

.PHONY:
	all clean fclean re