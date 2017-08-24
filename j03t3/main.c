/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 22:42:21 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/06 21:50:29 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int i);
void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *tartempion);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
/*	int a;
	int b;
	int *p1;
	int *ptr;
 	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	Exo0
	a=2;
	ft_putnbr(a);
	ft_putchar(' ');
	ft_ft(&a);
	ft_putnbr(a);

	Exo1
	a = 2;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_putnbr(a);
	ft_putchar(' ');
	ft_ultimate_ft(p9);
	ft_putnbr(a);

	Exo2
*//*	int a;
	int b;
	int *p1;
	int *ptr;

	a = 4;
	b = -2;
	p1 = &a;
	ptr = &b;
	ft_swap(p1, ptr);
	ft_putchar('a');
	ft_putchar(':');
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(':');
	ft_putnbr(b);

	Exo3
*//*	int a;
	int b;
	int *p1;
	int *ptr;
	int div;
	int mod;
	a = 2147483647;
	b = 2;
	p1 = &div;
	ptr = &mod;
	ft_div_mod(a, b, p1, ptr);
	ft_putchar('d');
	ft_putchar(':');
	ft_putnbr(div);
	ft_putchar(' ');
	ft_putchar('m');
	ft_putchar(':');
	ft_putnbr(mod);
	
	Exo4	
*//*	int a;
	int b;
	int *p1;
	int *ptr;

	a = 9;
	b = 2;
	p1 = &a;
	ptr = &b;
	ft_ultimate_div_mod(p1, ptr); 
	ft_putchar('a');
	ft_putchar(':');
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(':');
	ft_putnbr(b);

//	Exo5
	char *str;
	str = "j'aime les choux !@#$%^&*()_-+=][{}|\"':;>.<,  fleur";
	ft_putstr(str);

//	Exo6
	str = " h	y\nt";
	a = ft_strlen(str);
	ft_putnbr(a);

	Exo7
*/	char str[11] = "HPrMrorWZc";
	char *rev_str;

	ft_putstr(str);
	ft_putchar('\n');
	rev_str = ft_strrev(str);
	ft_putstr(str);
	ft_putchar('\n');

/*	Exo8
	char *str;
	int i;

	str = "  \n \t  -190ab98klgjfd";
	i = ft_atoi(str);
	ft_putstr("my fct : ");
	ft_putnbr(i);
	ft_putchar('\n');
	i = atoi(str);
	ft_putstr("atoi : ");
	ft_putnbr(i);
	ft_putchar('\n');
	str = " 2147483647";
	i = ft_atoi(str);
	ft_putstr("my fct : ");
	ft_putnbr(i);
	ft_putchar('\n');
	i = atoi(str);
	ft_putstr("atoi : ");
	ft_putnbr(i);
	ft_putchar('\n');
*/
/*	
	Exo9
	int tab[10];
	int size=10;
	int i;

	tab[0] = 4;
	tab[1] = -2147483648;
	tab[2] = 5;
	tab[3] = 9;
	tab[4] = 2147483647;
	tab[5] = 9;
	tab[6] = 12;
	tab[7] = 0;
	tab[8] = -9;
	tab[9] = 1;

	ft_sort_integer_table(tab, size);

	i = 0;
	while (i <= size - 1)
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
*/}
