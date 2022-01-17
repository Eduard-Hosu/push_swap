# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 15:26:47 by ehosu             #+#    #+#              #
#    Updated: 2021/06/16 11:47:02 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

REG_OBJ_FILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
					ft_isprint.o ft_memccpy.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
					ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
					ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_substr.o ft_strjoin.o ft_strtrim.o \
					ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
BONUS_OBJ_FILES = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstdelone.o ft_lstadd_back.o \
					ft_lstclear.o ft_lstiter.o

NAME = libft.a
C_FLAGS = -Wall -Wextra -Werror
AR = ar
HEADER = libft.h
CC = gcc

ifdef WITH_BONUS
OBJ_FILES = $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)
else
OBJ_FILES = $(REG_OBJ_FILES)
endif

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER)
	$(AR) rc $(NAME) $(OBJ_FILES)
	@echo "Done!"

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)
	@echo "Cleaning done!"

fclean: clean
	rm -f $(NAME)
	@echo "fclean done"

re: fclean all

bonus:
	$(MAKE) WITH_BONUS=1 all
	@echo "Bonus build done"

rebonus: fclean bonus