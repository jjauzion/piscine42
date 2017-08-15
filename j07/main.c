/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:02:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/15 12:40:23 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char 	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void 	ft_print_words_tables(char **tab);
void	ft_putchar (char c);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
//	Exo 00
/*	char *str1;
	char *str2;

	if (argc != 2)
	{
		printf("1 argument de type string requis\n");
		return (0);
	}
	str1 = ft_strdup(argv[1]);
	printf("resultat:%s\n", str1);
	str2 = strdup(argv[1]);
	printf("attendu:%s\n", str2);
*/
//	Exo 01
/*	int *res;
	int i;
	int min;
	int max;

	if (argc != 3)
	{
		printf("2 int required in argv\n");
		return (0);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	res = ft_range(min, max);
	if (res == NULL)
	{
		printf("error NULL returned\n");
		return (0);
	}
	i = 0;
	while (i <= max - min)
	{
		printf("res[%i]:\t%i\n", i, res[i]);
		i++;
	}
*/
//	Ex02
/*	int *tab = NULL;
	int min;
	int max;
	int i;
	int range;

	if (argc != 3)
	{
		printf("2 int required in argv\n");
		return (0);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range = ft_ultimate_range(&tab, min, max);
	if (tab == NULL)
	{
		printf("error NULL returned\n");
		return (0);
	}
	i = 0;
	printf("range = %i\n", range);
	while (i <= max - min)
	{
		printf("tab[%i]:\t%i\n", i, tab[i]);
		i++;
	}
*/
	//Exo3
/*	char *str;

	str = ft_concat_params(argc, argv);
	printf("%s", str);
*/
	//Exo4 et 5
/*	char **str;

	if (argc != 2)
		return (0);	
	str = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(str);
*/
//	Exo6
	char *res;
	int i;
	
	i = argc;
	res = argv[0];

	res = ft_convert_base("ifenopef","poneyvif", "lOL");
	printf("test 1: \"ifenopef\",\"poneyvif\", \"lOL\"\nAttendu:\tOllllLLLLOOOOOOl\nResultat:\t%s\n", res);
	res = ft_convert_base("150","0123456789", "01");
	printf("\ntest 2: \"150\",\"0123456789\", \"01\"\nAttendu:\t10010110\nResultat:\t%s\n", res);
	res = ft_convert_base("lol","pilou", "trole");
	printf("\ntest 3: \"lol\",\"pilou\", \"trole\"\nAttendu:\tolo\nResultat:\t%s\n", res);
	res = ft_convert_base("werqy","qwerty", "1234");
	printf("\ntest 3: \"werqy\",\"qwerty\", \"1234\"\nAttendu:\t241412\nResultat:\t%s\n", res);

	return (0);
}
