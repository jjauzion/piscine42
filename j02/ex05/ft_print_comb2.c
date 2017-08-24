/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:42:27 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/03 18:52:55 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put2int(int nb)
{
	int n10;
	int n01;

	n01 = nb % 10;
	n10 = (nb - n01) / 10;
	ft_putchar(n10 + 48);
	ft_putchar(n01 + 48);
}

void	ft_print_comb2(void)
{
	int i;
	int number1;
	int number2;

	number1 = 0;
	i = 1;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_put2int(number1);
			ft_putchar(' ');
			ft_put2int(number2);
			if (number1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number2++;
		}
		number1++;
	}
}
