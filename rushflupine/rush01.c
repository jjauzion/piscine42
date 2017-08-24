/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeborde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 22:36:49 by tdeborde          #+#    #+#             */
/*   Updated: 2017/08/19 17:17:33 by flupine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_assign_char_value(char flag, char *n)
{
	n[1] = '*';
	if (flag == 'A')
	{
		n[0] = '/';
		n[2] = '\\';
	}
	else if (flag == 'B')
	{
		n[0] = '*';
		n[1] = ' ';
		n[2] = '*';
	}
	else if (flag == 'C')
	{
		n[0] = '\\';
		n[2] = '/';
	}
}

void	ft_write_line(int x, char flag)
{
	char n[3];

	ft_assign_char_value(flag, n);
	ft_putchar(n[0]);
	while (x - 2 > 0)
	{
		ft_putchar(n[1]);
		x--;
	}
	if (x >= 2)
	{
		ft_putchar(n[2]);
	}
	ft_putchar('\\');
	ft_putchar('n');
}

void	rush(int x, int y)
{
	char	flag;

	if (x > 0 && y > 0)
	{
		ft_write_line(x, flag = 'A');
		while (y - 2 > 0)
		{
			ft_write_line(x, flag = 'B');
			y--;
		}
		if (y >= 2)
		{
			ft_write_line(x, flag = 'C');
		}
	}
}
