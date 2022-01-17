# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 18:22:39 by ehosu             #+#    #+#              #
#    Updated: 2022/01/12 19:57:46 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
HEADER = push_swap.h
SRCS = main.c
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