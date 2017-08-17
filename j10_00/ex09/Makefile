# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 09:23:55 by jjauzion          #+#    #+#              #
#    Updated: 2017/08/17 20:08:54 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# cible particulieres
.PHONY: all
.PHONY: db
.PHONY: clean

# desactivation des regles implicites
.SUFFIXES:

# definition des variables
NAME = prog
CC = gcc
CFLAGS = -Werror -Wall -Wextra

# all
all:
	$(CC) $(CFLAGS) do_op.c ft.h ft_calculus.c ft_opp.h t_opp.h ft_atoi.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_putnbr.c

#debbug
db:
	$(CC) $(CFLAGS) $(NAME) do_op.c ft.h ft_calculus.c ft_opp.h t_opp.h ft_atoi.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_putnbr.c -g3 -fsanitize=address

# clean
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

redb: fclean db
