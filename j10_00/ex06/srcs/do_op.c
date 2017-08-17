/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:34:29 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 22:07:24 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_opperation(char *a, char *b, char *o, int (*fct[5])(int, int));
int		ft_error(int argc, char *opp, char *str);

int		main(int argc, char **argv)
{
	int		(*fct[5])(int, int);
	int		res;

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
	fct[0] = &ft_add;
	fct[1] = &ft_sub;
	fct[2] = &ft_mul;
	fct[3] = &ft_div;
	fct[4] = &ft_mod;
	res = ft_opperation(argv[1], argv[3], argv[2], fct);
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}

int		ft_opperation(char *a, char *b, char *o, int (*fct[5])(int, int))
{
	char	*opperand;
	int		i;

	opperand = "+-*/%";
	i = 0;
	while (opperand[i])
	{
		if (opperand[i] == o[0])
			return (fct[i](ft_atoi(a), ft_atoi(b)));
		i++;
	}
	return (0);
}
