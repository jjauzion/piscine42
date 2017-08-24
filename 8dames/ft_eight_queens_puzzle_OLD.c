/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:31:05 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/14 12:00:10 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_queen(int position, int nb_queen, int tab[8][8], int value, int nb_combi);
int		ft_check_line(int position, int tab[8][8]);
int		ft_check_diag(int position, int tab[8][8]);
void	ft_display(int tab[8][8]);

int		ft_eight_queens_puzzle(void)
{
	int tab[8][8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
	int nb_combi;

	nb_combi = ft_queen(0, 0, tab, 0, 0);
	return (nb_combi);
}

int		ft_queen(int position, int nb_queen, int tab[8][8], int value, int nb_combi)
{
//	printf("posi:%i ; i:%i ; j:%i\n",position, position / 8, position % 8);
	printf("queen:%i ; combi:%i\n", nb_queen, nb_combi);
	tab[(position - 1) / 8][(position - 1) % 8] = value;
	ft_display(tab);
	getchar();
	if (nb_queen == 8)
		return (1);
	if (position > 63)
	{
		printf("1: return0\n");
		return (0);
	}
	while (nb_queen < 8)
	{
		printf("posi:%i ; i:%i ; j:%i\n",position, position / 8, position % 8);
		if (position > 63)
		{
			printf("1: return0\n");
			return (0);
		}
		if (ft_check_line(position, tab) && ft_check_diag(position, tab))
		{
			if (!ft_queen(position + 1, nb_queen + 1, tab, 1, nb_combi))
			{
				printf("ICI\n");
				nb_combi = ft_queen(position + 1, nb_queen, tab, 0, nb_combi);
			}
			else
				nb_combi++;
//			if (!ft_queen(position + 8 - position % 8, nb_queen, tab))
		}
		else if (position % 8 == 7 && nb_queen < position / 8 + 1)
		{
			printf("i=%i ; j=%i ; nb_queen=%i\n", position / 8, position % 8, nb_queen);
			return (0);
		}
		else
			position++;
	}
	return (nb_combi);
}

int		ft_check_line(int position, int tab[8][8])
{
	int c;

	c = 0;
	while (c <= 7)
	{
		if (tab[position / 8][c] == 1)
			return (0);
		if (tab[c][position % 8] == 1)
			return (0);
		c++;
	}
	return (1);
}

int		ft_check_diag(int position, int tab[8][8])
{
	int min;
	int di;
	int d1j;
	int d2j;

	min = position % 8;
	if (position / 8 < position % 8)
		min = position / 8;
	di = position / 8 - min;
	d1j = position % 8 - min;
	d2j = position % 8 + min;
	while (di <= 7 && d1j <= 7)
	{
		if (tab[di][d1j] == 1)
			return (0);
		di++;
		d1j++;
	}
	di = position / 8 - min;
	while (di <= 7 && d2j >= 0)
	{
		if (tab[di][d2j] == 1)
			return (0);
		di++;
		d2j--;
	}
	return (1);
}

void	ft_display(int tab[8][8])
{
	int k;
	int l;

	k = 0;
	while (k <= 7)
	{
		l = 0;
		while (l <= 7)
		{
			printf("%i ",tab[k][l]);
			l++;
		}
		printf("\n");
		k++;
	}
	printf("\n");
	printf("\n");
}


int		main(void)
{
	int res;
	res = ft_eight_queens_puzzle();
	printf("RESULTAT : %i\n", res);
	return(0);
}
