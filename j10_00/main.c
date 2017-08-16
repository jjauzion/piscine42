/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 16:01:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/16 22:41:08 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
typedef	void(*fptr)(int);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_addNdisplay(int i);
int		ft_add(int i);

void	ft_foreach(int *tab, int length, void(*f)(int));
int		*ft_map(int *tab, int length, int(*f)(int));

int		main(void)
{

//	Exo1
/*	fptr	f;
	int 	tab[5] = {1, 2, 3, 4, 5};

	f = &ft_addNdisplay;
	ft_foreach(tab, 5, f);
*/
//	Exo2
	int		(*f)(int);
	int 	tab[5] = {1, 2, 3, 4, 5};
	int		*ptab;
	int		i;

	f = &ft_add;
	ptab = ft_map(tab, 5, f);
	i = 0;
	while (i < 5)
	{
		ft_putnbr(ptab[i]);
		ft_putchar('\n');
		i++;
	}

	return (0);
}

void	ft_addNdisplay(int i)
{
	i = i + 2;
	ft_putnbr(i);
}

int		ft_add(int i)
{
	i = i - 1;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
