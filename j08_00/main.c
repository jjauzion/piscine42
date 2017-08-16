/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:02:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/15 20:39:29 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft.h"

char	**ft_split_whitespaces(char *str);
void 	ft_print_words_tables(char **tab);

int		main(int argc, char **argv)
{
	//Exo0
	char **str;

	if (argc != 2)
		return (0);	
	str = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(str);

	//Exo1
	ft_putstr("Si tu lis ceci c'est que c'est bon :)\n");

	return (0);
}
