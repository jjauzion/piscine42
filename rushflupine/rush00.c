/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:27:09 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/19 17:17:10 by flupine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_assign_char_value(char flag, char *n)
{
	n[0] = 'o';
	n[1] = '-';
	n[2] = 'o';
	if (flag == 'B')
	{
		n[0] = '|';
		n[1] = ' ';
		n[2] = '|';
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

void	rush00(int x, int y)
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
