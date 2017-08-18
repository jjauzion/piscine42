# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 09:23:55 by jjauzion          #+#    #+#              #
#    Updated: 2017/08/17 22:26:45 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# cible particulieres
.PHONY: all
.PHONY: db
.PHONY: clean

# desactivation des regles implicites
.SUFFIXES:

# definition des variables
NAME = do-op
CC = gcc
CFLAGS = -c -Werror -Wall -Wextra
LIBDIR = -Iincludes/
SRCS = srcs/do_op.c srcs/ft_calculus.c srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_strlen.c srcs/ft_putstr.c
SRCS_O = do_op.o ft_calculus.o ft_putchar.o ft_strcmp.o ft_atoi.o ft_putnbr.o ft_strlen.o ft_putstr.o


# Rules
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(LIBDIR)
	$(CC) -o $(NAME) $(SRCS_O)

#debbug
db:
	$(CC) $(CFLAGS) $(SRCS) $(LIBDIR)
	$(CC) -o $(NAME) $(SRCS_O) -g3 -fsanitize=address

# clean
clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -rf $(NAME)*

re: fclean all

redb: fclean db
