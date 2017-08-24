/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:35:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/08 11:39:53 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		sqrt2(int nb)
{
	float	r;

	if (nb <= 0)
		return (0);
	r = nb / 2;
	while (r * r != nb)
	{
		r = r + (nb - r * r) / (2 * r);
	}
	printf("r:%f ; r/1=%f ; r/1-r=%f\nr*r=%f ; nb=%i\ntest logique=%i\n",r, r / 1, r / 1 - r, r * r, nb, ((r * r) == nb));
	if ((r / 1 -  r  == 0) && ((r * r) == nb))
		return (r);
	else
		return (0);
}
