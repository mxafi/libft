# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:04:36 by malaakso          #+#    #+#              #
#    Updated: 2022/10/24 16:45:42 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): create_objects
	ar ruvcs $(NAME) $(OBJS)

create_objects:
	$(CC) $(CFLGS) -c $(SRCS) -I

.PHONY: clean

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
