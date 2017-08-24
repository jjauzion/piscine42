/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:57:40 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/03 18:44:25 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_display(int n0, int n1, int n2)
{
	ft_putchar(n0 + 48);
	ft_putchar(n1 + 48);
	ft_putchar(n2 + 48);
	if ((n0 * 100 + n1 * 10 + n2) < 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	n2++;
	return (n2);
}

void	ft_print_comb(void)
{
	int		number[3];
	int		i;
	int		j;

	number[0] = 0;
	i = 1;
	j = 2;
	while (number[0] <= 7)
	{
		number[1] = i;
		while (number[1] <= 8)
		{
			number[2] = j;
			while (number[2] <= 9)
			{
				number[2] = ft_display(number[0], number[1], number[2]);
			}
			j++;
			number[1]++;
		}
		i++;
		j = i + 1;
		number[0]++;
	}
}
