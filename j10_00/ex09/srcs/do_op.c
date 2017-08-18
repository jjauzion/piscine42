/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:34:29 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/18 11:16:33 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_atoi(argv[3]) == 0 && argv[2][0] == 47)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && argv[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_opperation(argv[1], argv[3], argv[2]);
	return (0);
}

int		ft_opperation(char *a, char *b, char *o)
{
	int		i;

	i = 0;
	while (ft_strcmp(g_opptab[i].opp, "") != 0)
	{
		if (ft_strcmp(g_opptab[i].opp, o) == 0)
		{
			ft_putnbr(g_opptab[i].fct(ft_atoi(a), ft_atoi(b)));
			ft_putchar('\n');
			return (1);
		}
		i++;
	}
	if (ft_strcmp(g_opptab[i].opp, "") == 0)
		g_opptab[i].fct(ft_atoi(a), ft_atoi(b));
	return (0);
}

int		ft_usage(int a, int b)
{
	int i;

	a = b;
	ft_putstr("error : only [ ");
	i = 0;
	while (ft_strcmp(g_opptab[i].opp,"") != 0)
	{
		ft_putstr(g_opptab[i].opp);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted");
	ft_putchar('\n');
	return (0);
}
