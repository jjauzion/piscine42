/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex#main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:52:43 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/15 22:09:30 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int		main(void)
{
	int a;
	int b;

	a = -10;
	b = a;
	ABS(b);
	printf("abs(%i) = %i\n", a, b);
	a = 1;
	b = a;
	ABS(b);
	printf("abs(%i) = %i\n", a, b);
	a = 0;
	b = a;
	ABS(b);
	printf("abs(%i) = %i\n", a, b);
	return(0);
}
