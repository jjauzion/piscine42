/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:27:17 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/20 19:36:42 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_stack_out(int q, char *queue, char *stack)
{
	int i;
	int len;

	len = ft_strlen(stack);
	i = 0;
	while (len > 0)
	{
		queue[q] = stack[len];
		len--;
		q++;
	}
	stack[len] = '\0';
	return (q);
}	
