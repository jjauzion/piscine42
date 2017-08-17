/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:34:29 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 20:11:38 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_opp
{
	char	*opperand;
	int		(*fct)(int, int);
}				t_opp;

#include "ft.h"
//#include "t_opp.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int		value1;
	int		value2;
	char	*op;
	int		res;
	int		i;

	if (argc != 3)
	{
		ft_putstr("ERROR(0): 3 arguments required\n value1 operator value2\n");
		return (0);
	}
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	op = argv[2];
	i = 0;
	while (ft_strcmp(g_opptab[i].opperand,""))
	{
		if (ft_strcmp(g_opptab[i].opperand, op) == 0)
			res = g_opptab[i].fct(value1, value2);
		i++;
	}
	ft_putnbr(res);
	return (0);
}
