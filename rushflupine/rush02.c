/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:28:50 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/20 15:59:41 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_assign_char_value(char flag, char *n)
{
	n[1] = 'B';
	if (flag == 'A')
	{
		n[0] = 'A';
		n[2] = 'A';
	}
	else if (flag == 'B')
	{
		n[0] = 'B';
		n[1] = ' ';
		n[2] = 'B';
	}
	else if (flag == 'C')
	{
		n[0] = 'C';
		n[2] = 'C';
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
	ft_putchar('\\')
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

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
