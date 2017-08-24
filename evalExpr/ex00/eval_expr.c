/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 11:09:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/20 20:45:22 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
int		eval_expr(char *expr)
{
	char	*queue;
	char	*stack;
	int		i;
	int		q;
	
	g_opptab[0].opp = '+';
	g_opptab[0].prio = 4;
	g_opptab[0].fct = &ft_add;
	g_opptab[1].opp = '-';
	g_opptab[1].prio = 4;
	g_opptab[1].fct = &ft_sub;
	g_opptab[2].opp = '*';
	g_opptab[2].prio = 3;
	g_opptab[2].fct = &ft_mul;
	g_opptab[3].opp = '/';
	g_opptab[3].prio = 3;
	g_opptab[3].fct = &ft_div;
	g_opptab[4].opp = '%';
	g_opptab[4].prio = 3;
	g_opptab[4].fct = &ft_mod;
	g_opptab[5].opp = '(';
	g_opptab[5].prio = 1;
	g_opptab[5].fct = &ft_mod;
	g_opptab[6].opp = ')';
	g_opptab[6].prio = 1;
	g_opptab[6].fct = &ft_mod;
	g_opptab[7].opp = '\0';
	g_opptab[7].prio = 0;
	g_opptab[7].fct = &ft_usage;
/*	g_opp	{'-', 4, &ft_sub},
		{'*', 3, &ft_mul},
		{'/', 3, &ft_div},
		{'%', 3, &ft_mod},
		{'(', 1, &ft_mod},
		{')', 1, &ft_mod},
		{'\0', 0, &ft_usage},
	};
*/
	ft_malloc_str(&queue, expr);
	ft_malloc_str(&stack, expr);
	if (!stack || !queue)
	{
		ft_putstr("erreur malloc mamen\n");
		return (666);
	}
	stack[0] = '\0';
	queue[0] = '\0';
	i = 0;
	q = 0;
	while (expr[i])
	{
printf("expr[%i]:%c\n",i,expr[i]);
		ft_printf_stack("0",stack);
		ft_printf_queue("0",queue);
		if (expr[i] >= '0' && expr[i] <= '9')
		{
			queue[q] = expr[i];
			q++;
		}
		if (ft_check_opp(expr[i]))
			q = ft_stack(expr[i], queue, q, stack);
		ft_printf_stack("1",stack);
		ft_printf_queue("1",queue);
		i++;
	}
	q = ft_stack_out(q, queue, stack);
	ft_printf_stack("2",stack);
	ft_printf_queue("2",queue);
	return (0);
	//	return (ft_compute(queue));
}

void 	ft_malloc_str(char **str, char *expr)
{
	*str = malloc (sizeof(char) * (ft_strlen(expr) + 1));
	if (str == NULL)
		return ;
}

int		ft_check_opp(char c)
{
	int i;

	i = 0;
	while (g_opptab[i].opp != '\0')
	{
		if (c == g_opptab[i].opp)
			return (1);		   
		i++;
	}
	return (0);
}

int		ft_usage(int a, int b)
{
	a = b;
	ft_putstr("FATAL ERROR MAN :/\n");
	return (-1);
}
