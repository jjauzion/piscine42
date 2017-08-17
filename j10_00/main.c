/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 16:01:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/18 00:14:21 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
typedef	void(*fptr)(int);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_addNdisplay(int i);
int		ft_add(int i);
int		ft_check_tab(char *str);
int		ft_is_supinf(int a, int b);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);
int		ft_cmpstr(char *s1, char *s2);

void	ft_foreach(int *tab, int length, void(*f)(int));
int		*ft_map(int *tab, int length, int(*f)(int));
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int(*f)(char*));
int		ft_is_sort(int *tab, int length, int(*f)(int, int));
void	ft_sort_wordtab(char **tab);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

int		main(void)
{

	//	Exo1
	/*	fptr	f;
		int 	tab[5] = {1, 2, 3, 4, 5};

		f = &ft_addNdisplay;
		ft_foreach(tab, 5, f);
		*/
	//	Exo2
	/*	int		(*f)(int);
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
		*/
	//Exo3 et 4
	/*	int		(*f)(char*);	
		int		res;
		char	*tab[4];

		f = &ft_check_tab;
		tab[0] = "zbcd";
		tab[1] = "abcd";
		tab[2] = "abcz";
		tab[3] = 0;
		res = ft_any(tab, f);
		printf("ft_any : %i\t(1 attendu)\n", res);
		res = ft_count_if(tab, f);
		printf("ft_count_if : %i\t(2 attendu)\n", res);
		tab[0] = "abcd";
		tab[1] = "abcd";
		tab[2] = "ybjh";
		tab[3] = 0;
		res = ft_any(tab, f);
		printf("ft_any : %i\t(0 attendu)\n", res);
		res = ft_count_if(tab, f);
		printf("ft_count_if : %i\t(0 attendu)\n", res);
		tab[0] = "";
		tab[1] = "";
		tab[2] = "ybjh";
		tab[3] = 0;
		res = ft_any(tab, f);
		printf("ft_any : %i\t(0 attendu)\n", res);
		res = ft_count_if(tab, f);
		printf("ft_count_if : %i\t(0 attendu)\n", res);
		*/
	//Exo5
	/*	int (*f)(int a, int b);
		int tab[10];
		int i;
		int res;

		f = &ft_is_supinf;
		i = -1;
		while (++i <= 9)
		tab[i] = i;
		tab[9] = 1;
		res = ft_is_sort(tab, 10, f);
		printf("ft_is_sort :\t%i (0 attendu)\n", res);
		tab[0] = -10;
		tab[9] = 10;
		res = ft_is_sort(tab, 10, f);
		printf("ft_is_sort :\t%i (1 attendu)\n", res);
		*/
	//Exo7
/*	char **str;

	str = ft_split_whitespaces("bbb aaa dddd ccc");
	ft_sort_wordtab(str);
	ft_print_words_tables(str);
*/	
	//Exo8
	char **str;
	int (*cmp)(char *, char *);

	cmp = &ft_cmpstr;
	str = ft_split_whitespaces("  bbb aaa dddd ccc  ");
	ft_advanced_sort_wordtab(str, cmp);
	ft_print_words_tables(str);


	return (0);
}

int		ft_cmpstr(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i])
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_is_supinf(int a, int b)
{
	return (a - b);
}

int		ft_check_tab(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			return (1);
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
