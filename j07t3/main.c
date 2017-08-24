/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:02:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 17:19:05 by jjauzion         ###   ########.fr       */
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
	printf("resultat:\t%s\n", str1);
	str2 = strdup(argv[1]);
	printf("attendu:\t%s\n", str2);
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
	while (i < max - min)
	{
		printf("res[%i]:\t%i\n", i, res[i]);
		i++;
	}
*/
//	Ex02
	int *tab = NULL;
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
		printf("range=%i\n",range);
		return (0);
	}
	i = 0;
	printf("range = %i\n", range);
	while (i < max - min)
	{
		printf("tab[%i]:\t%i\n", i, tab[i]);
		i++;
	}

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
/*	char *res;
	
	if (argc != 4)
	{
		printf("%i: trois arguments requis !!\n", argc);
		return (0);
	}

	res = ft_convert_base("ifenopef","poneyvifp", "01");
	printf("test 0: \"ifenopef\",\"poneyvifp\", \"01\"\nAttendu:\t|(null)\nResultat:\t|%s\n", res);
	res = ft_convert_base("ifenopef","poneyvif", "11");
	printf("test 1: \"ifenopef\",\"poneyvif\", \"11\"\nAttendu:\t|(null)\nResultat:\t|%s\n", res);
	res = ft_convert_base("ifenopef","poneyvif", "1");
	printf("test 2: \"ifenopef\",\"poneyvif\", \"1\"\nAttendu:\t|(null)\nResultat:\t|%s\n", res);
	res = ft_convert_base("ifenopef","poneyvif", "");
	printf("test 3: \"ifenopef\",\"poneyvif\", \"\"\nAttendu:\t|(null)\nResultat:\t|%s\n", res);
	res = ft_convert_base("ifenopef","poneyvif", "lOL");
	printf("test 4: \"ifenopef\",\"poneyvif\", \"lOL\"\nAttendu:\t|OllllLLLLOOOOOOl\nResultat:\t|%s\n", res);
	res = ft_convert_base("150","0123456789", "01");
	printf("\ntest 5: \"150\",\"0123456789\", \"01\"\nAttendu:\t|10010110\nResultat:\t|%s\n", res);
	res = ft_convert_base("lol","pilou", "trole");
	printf("\ntest 6: \"lol\",\"pilou\", \"trole\"\nAttendu:\t|olo\nResultat:\t|%s\n", res);
	res = ft_convert_base("werqy","qwerty", "1234");
	printf("\ntest 7: \"werqy\",\"qwerty\", \"1234\"\nAttendu:\t|241412\nResultat:\t|%s\n", res);
	res = ft_convert_base("2147483647","0123456789", "01");
	printf("\ntest 8: \"2147483647\",\"0123456789\", \"01\"\nAttendu:\t|1111111111111111111111111111111\nResultat:\t|%s\n", res);
	res = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("\ntest 9: %s %s %s\nResultat:\t|%s\n", argv[1], argv[2], argv[3], res);
*/	return (0);
}
