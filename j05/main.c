/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 22:42:21 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/12 09:45:33 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int i);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char 	*ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);

int		main(int argc,char **argv)
{
	int i;
	char *str;	
	char test_str4[100];
	char *ptr4;
	char test_str[100];
	char *ptr;
	char test_str2[100];
	char *ptr2;
	char test_str3[100];
	char *ptr3;
// argv 1 int ; 2 str ; 3 int ; 4 str ; 5 int ; 6 str ex20 ; 7 int ex20;
	i = argc;

//	Exo0
	ft_putstr("\0");

//	Exo1
	ft_putnbr(atoi(argv[1]));

//	Exo2
	str = "  ";
	i = ft_atoi(str);
	ft_putstr("\nmy fct : ");
	ft_putnbr(i);
	ft_putchar('\n');
	i = atoi(str);
	ft_putstr("atoi : ");
	ft_putnbr(i);
	ft_putchar('\n');
	str = " +2147 483647";
	i = ft_atoi(str);
	ft_putstr("my fct : ");
	ft_putnbr(i);
	ft_putchar('\n');
	i = atoi(str);
	ft_putstr("atoi : ");
	ft_putnbr(i);
	ft_putchar('\n');

//	Exo3
	test_str4[0] = '*';
	test_str4[1] = '*';
	test_str4[2] = '*';
	test_str4[3] = '*';
	test_str4[4] = '*';
	test_str4[5] = '*';
	test_str4[6] = '*';
	ptr = strcpy(test_str, argv[2]);
	ft_putstr("1: strcpy=");
	ft_putstr(test_str);
	ft_putstr("\nptr=");
	ft_putstr(ptr);
	
	ft_putstr("\nptr[ii]=");
	i = 0;
	while (ptr[i])
	{
		ft_putchar(ptr[i]);
		i++;
	}
	i = 0;
	test_str[0] = '+';
	test_str[1] = '+';
	test_str[2] = '+';
	test_str[3] = '+';
	test_str[4] = '+';
	test_str[5] = '+';
	test_str[6] = '+';
	ptr4 = ft_strcpy(test_str, argv[2]);
	ft_putstr("\n2: ft_strcpy=");
	ft_putstr(test_str);
	ft_putstr("\nptr=");
	ft_putstr(ptr4);
	ft_putstr("\nptr4[ii]=");
	while (ptr4[i])
	{
		ft_putchar(ptr4[i]);
		i++;
	}

//	Exo4
	test_str2[0] = 'z';
	test_str2[1] = 'z';
	test_str2[2] = 'z';
	test_str2[3] = 'z';
	test_str2[4] = 'z';
	ptr2 = strncpy(test_str2, argv[2], atoi(argv[3]));
	ft_putstr("\n3: strncpy=");
	ft_putstr(test_str2);
	ft_putstr("\nptr2=");
	ft_putstr(ptr2);
	test_str3[0] = 'w';
	test_str3[1] = 'w';
	test_str3[2] = 'w';
	test_str3[3] = 'w';
	test_str3[4] = 'w';
	ptr3 = ft_strncpy(test_str3, argv[2], atoi(argv[3]));
	ft_putstr("\n4: ft_strncpy=");
	ft_putstr(test_str3);
	ft_putstr("\nptr3=");
	ft_putstr(ptr3);

//	Exo5
	char *ptr1_exo5;
	char *ptr2_exo5;

	ptr1_exo5 = strstr("coucou je te teste", "kls");
	printf("\nptr1_exo5=%s\n",ptr1_exo5);
	ft_putstr(ptr1_exo5);
	ptr2_exo5 = ft_strstr("coucou je te teste", "kls");
	printf("printf de ptr2_exo5=%s\n",ptr2_exo5);

//	Exo6
	int i_exo6;

	i_exo6 = strcmp(" abcd"," abcde");
	ft_putstr("\nExo6:\nstrcmp=");
	ft_putnbr(i_exo6);
	i_exo6 = ft_strcmp(" abcd", " abcde");
	ft_putstr("\nExo6:\nft_strcmp=");
	ft_putnbr(i_exo6);

//	Exo7
	int i_exo7;

	i_exo7 = strncmp("a ab2cz"," abctz", 0);
	ft_putstr("\nExo7:\nstrncmp=");
	ft_putnbr(i_exo7);
	i_exo7 = ft_strncmp("z ab2cz", " abcta", 0);
	ft_putstr("\nExo7:\nft_strncmp=");
	ft_putnbr(i_exo7);

//	Exo8
	char *str_exo8;

	str_exo8 = argv[2];
	str_exo8 = ft_strupcase(str_exo8);
	ft_putchar('\n');
	ft_putstr(str_exo8);
	ft_putchar('\n');

//	Exo9
	char *str_exo9;

	str_exo9 = argv[2];
	str_exo9 = ft_strlowcase(str_exo9);
	ft_putchar('\n');
	ft_putstr(str_exo9);
	ft_putchar('\n');

//	Exo10
	char *str_exo10;

	str_exo10 = argv[2];
	str_exo10 = ft_strcapitalize(str_exo10);
	ft_putchar('\n');
	ft_putstr(str_exo10);
	ft_putchar('\n');

//	Exo11
	int i_exo11;

	i_exo11 = ft_str_is_alpha(argv[2]);
	ft_putchar('\n');
	ft_putstr("is_alpha=");
	ft_putnbr(i_exo11);
	ft_putchar('\n');

//	Exo12
	int i_exo12;

	i_exo12 = ft_str_is_numeric(argv[2]);
	ft_putchar('\n');
	ft_putstr("is_numeric=");
	ft_putnbr(i_exo12);
	ft_putchar('\n');

//	Exo13 et 14
	int i_exo134;

	i_exo134 = ft_str_is_lowercase(argv[4]);
	ft_putchar('\n');
	ft_putstr("is_lowercase=");
	ft_putnbr(i_exo134);
	ft_putchar('\n');
	i_exo134 = ft_str_is_uppercase(argv[4]);
	ft_putstr("is_uppercase=");
	ft_putnbr(i_exo134);
	ft_putchar('\n');

//	Exo15
	int i_exo15;

	i_exo15 = ft_str_is_printable(argv[4]);
	ft_putstr("Exo15: is_printable=");
	ft_putnbr(i_exo15);
	ft_putchar('\n');

//	Exo16
	char str_16[50];
	char *ptr1_16;
	char str2_16[50];
	char *ptr2_16;

	str_16[0] = 'h';
	str_16[1] = 'e';
	str_16[2] = 'l';
	str_16[3] = 'l';
	str_16[4] = 'o';
	str_16[5] = '!';
	str2_16[0] = 'h';
	str2_16[1] = 'e';
	str2_16[2] = 'l';
	str2_16[3] = 'l';
	str2_16[4] = 'o';
	str2_16[5] = '!';

	ptr1_16 = strcat(str_16, "  $pilou");
	ft_putstr("Exo16: strcat=");
	ft_putstr(ptr1_16);
	ft_putchar('\n');
	ptr2_16 = ft_strcat(str2_16, "  $pilou");
	ft_putstr("Exo16: ft_strcat=");
	ft_putstr(ptr2_16);
	ft_putchar('\n');

//	Exo17
	char str_17[50];
	char *ptr1_17;
	char str2_17[50];
	char *ptr2_17;

	str_17[0] = 'h';
	str_17[1] = 'e';
	str_17[2] = 'l';
	str_17[3] = 'l';
	str_17[4] = 'o';
	str_17[5] = '!';
	str2_17[0] = 'h';
	str2_17[1] = 'e';
	str2_17[2] = 'l';
	str2_17[3] = 'l';
	str2_17[4] = 'o';
	str2_17[5] = '!';

	ptr1_17 = strncat(str_17, " $pilou", 4);
	ft_putstr("Exo17: strncat=");
	ft_putstr(ptr1_17);
	ft_putchar('\n');
	ptr2_17 = ft_strncat(str2_17, "$pilou", 4);
	ft_putstr("Exo17: ft_strncat=");
	ft_putstr(ptr2_17);
	ft_putchar('\n');

//	Exo18
	char str_18[50];
	int i1_18;
	char str2_18[50];
	int i2_18;

	str_18[0] = 'h';
	str_18[1] = 'e';
	str_18[2] = 'l';
	str_18[3] = 'l';
	str_18[4] = 'o';
	str_18[5] = '!';
	str_18[6] = '4';
	str_18[7] = '2';
	str2_18[0] = 'h';
	str2_18[1] = 'e';
	str2_18[2] = 'l';
	str2_18[3] = 'l';
	str2_18[4] = 'o';
	str2_18[5] = '!';
	str2_18[6] = '4';
	str2_18[7] = '2';

	i1_18 = strlcat(str_18, argv[4], atoi(argv[5]));
	printf("Exo18\ni1_18=%i ; strlcat=\t\t%s\n", i1_18, str_18);
	i2_18 = ft_strlcat(str2_18, argv[4], atoi(argv[5]));
	printf("i2_18=%i ; ft_strlcat=\t\t%s\n", i2_18, str2_18);

//	Exo19
	char str_19[50];
	int i1_19;
	char str2_19[50];
	int i2_19;

	str_19[0] = 'h';
	str_19[1] = 'e';
	str_19[2] = 'l';
	str_19[3] = 'l';
	str_19[4] = 'o';
	str_19[5] = '!';
	str_19[6] = '4';
	str_19[7] = '2';
	str2_19[0] = 'h';
	str2_19[1] = 'e';
	str2_19[2] = 'l';
	str2_19[3] = 'l';
	str2_19[4] = 'o';
	str2_19[5] = '!';
	str2_19[6] = '4';
	str2_19[7] = '2';

	printf("i2_19= ; ft_strlcpy=\n");
	i1_19 = strlcpy(str_19, argv[4], atoi(argv[5]));
	printf("Exo19\ni1_19=%i ; strlcpy=\t\t%s\n", i1_19, str_19);
	i2_19 = ft_strlcpy(str2_19, argv[4], atoi(argv[5]));
	printf("i2_19=%i ; ft_strlcpy=\t\t%s\n", i2_19, str2_19);

	//Exo20
	ft_putstr("\nExo20:\n");
	ft_putnbr_base(atoi(argv[6]), argv[7]);

	return(0);
}
