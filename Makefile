# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:04:36 by malaakso          #+#    #+#              #
#    Updated: 2022/10/24 15:33:21 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLGS = -Wall -Wextra -Werror
SRCS = srcs/ft_*.c #ILLEGAL STUFF AGAINST THE NORM, REMEMBER TO SPECIFY EACH SOURCE FILE
OBJS = $(SRCS:srcs/%.c=%.o)

all: $(NAME)

$(NAME): create_objects
	ar ruvcs $(NAME) $(OBJS)

create_objects:
	$(CC) $(CFLGS) -c $(SRCS) -Iincludes

.PHONY: clean

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
