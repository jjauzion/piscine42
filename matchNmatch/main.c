/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:51:37 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/13 21:49:49 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//int		nmatch(char *s1, char *s2);
int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("nb d'argument impossible!\n");
		return (0);
	}
//	i = nmatch(argv[1], argv [2]);
	i = match(argv[1], argv [2]);
	printf("%i\n", i);
	return (0);
}
