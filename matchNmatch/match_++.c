/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:40:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/13 17:31:01 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search(int *cpt, char *str, char *find);
#include <stdio.h>
int		match(char *s1, char *s2)
{
	int cpt;
	int *pcpt;
	int trash;

	cpt = 0;
	pcpt = &cpt;
	trash = ft_search(pcpt, s1, s2);
	return (cpt);
}

int		ft_search(int *cpt, char *str, char *find)
{
	if (!*str && !*find)
	{
		printf("1: str:%s ; find:%s\n", str, find);
		*cpt = *cpt + 1;
		return(1);
	}
	else
	{
		if (*str == *find)
		{	
			printf("2: str:%s ; find:%s\n", str, find);
			return (ft_search(cpt, ++str, ++find));
		}
		else if (*find == '*')
		{
			printf("3: str:%s ; find:%s\n", str, find);
			ft_search(cpt, str, ++find);
			if (*str)
			{	
				printf("4: str:%s ; find:%s\n", str, find);
			ft_search(cpt, ++str, --find);
			}
		}
		else
		{
			printf("5: str:%s ; find:%s\n", str, find);
			return (0);
		}
		return(666);
	}
}
