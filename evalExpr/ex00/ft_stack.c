/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 12:46:37 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/20 21:54:26 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
void ft_printf_stack(char *str, char *stack)
{
	int i;
	i=-1;
	printf("%s stack:\t| ",str);
	while(++i<ft_strlen(stack))
		printf("%c |",stack[i]);
	printf("\n");
}
void ft_printf_queue(char *str, char *queue)
{
	int i;
	i=-1;
	printf("%s queue:\t| ", str);
	while(++i<ft_strlen(queue))
		printf("%c | ",queue[i]);
	printf("\n");
}
int		ft_stack(char opp, char *queue, int q, char *stack)
{
	int		s;

	if (ft_strlen(stack) == 0)
	{
		stack[0] = opp;
		stack[1] = '\0';
	printf("00opp:%c stack[0]:%c\n",opp, stack[0]);
		return (q);
	}
	else
		s = ft_strlen(stack);
	printf("01opp:%c ; s:%i ; stack[s]:%c\n",opp, s, stack[s]);
	while (ft_is_hioreq_prio(stack[s - 1], opp) && s > 0)
	{
		queue[q] = stack[s];
		ft_printf_stack("01", stack);
		ft_printf_queue("01", queue);
		s--;
//		s = (s > 0) ? s = s - 1 : 0;
		q++;
		getchar();
	}
	if (opp == ')')
	{
	printf("02opp:%c ; s:%i ; stack[s]:%c\n",opp, s, stack[s]);
		while (stack[s] != '(' && s >= 0)
		{
			if (!stack[s])
				return (-1);
			queue[q] = stack[s];
		ft_printf_stack("02", stack);
		ft_printf_queue("02", queue);
			s--;
			q++;
		}
		s = (s > 0) ? s = s - 1 : 0;
	}
	else
		stack[s] = opp;
	printf("03opp:%c ; s:%i ; stack[s]:%c\n",opp, s, stack[s]);
	stack[s + 1] = '\0';
	ft_printf_stack("03", stack);
	ft_printf_queue("03", queue);
	return (q);
}
int		ft_is_hioreq_prio(char opp1, char opp2)
{
	int i;
	int opp1_prio;
	int	opp2_prio;

	i = 0;
	opp1_prio = -1;
	opp2_prio = -1;
	while (g_opptab[i].opp != '\0')
	{
		if (opp1 == g_opptab[i].opp)
			opp1_prio = g_opptab[i].prio;
		if (opp2 == g_opptab[i].opp)
			opp2_prio = g_opptab[i].prio;
		i++;
	}
	if (opp1_prio <= 0 || opp2_prio <= 0)
		return (0);
	if (opp1_prio >= opp2_prio)
		return (1);
	else
		return (0);
}
