/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:58:34 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/15 21:09:52 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putnbr(8);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < 10)
		{
			ft_putchar(nb + 48);
		}
		else
		{
			ft_putnbr((nb - (nb % 10)) / 10);
			ft_putnbr(nb % 10);
		}
	}
}
