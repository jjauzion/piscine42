# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 09:23:55 by jjauzion          #+#    #+#              #
#    Updated: 2017/08/17 12:05:04 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# cible particulieres
.PHONY: clean
.PHONY: fonction.o 

# desactivation des regles implicites
.SUFFIXES:

# definition des variables
CC = gcc
NAME = libft.a

# all
all: fonction.o
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o includes/*.h
	ranlib $(NAME)

fonction.o:
	$(CC) -c srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c


# clean
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
