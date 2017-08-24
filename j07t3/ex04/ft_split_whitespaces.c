/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:21:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/16 19:45:34 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_scan_str(char *str, int *ptr);
char	**ft_split_str(char *str, char **word);

char	**ft_split_whitespaces(char *str)
{
	int		max_length;
	int		nb_word;
	int		*ptr;
	char	**words;
	int		i;

	ptr = &max_length;
	nb_word = ft_scan_str(str, ptr);
	words = malloc(sizeof(char *) * nb_word);
	if (words == NULL)
		return (0);
	i = 0;
	while (i < nb_word)
	{
		words[i] = malloc(sizeof(char) * (max_length + 1));
		if (words[i] == NULL)
			return (0);
		i++;
	}
	words = ft_split_str(str, words);
	words[nb_word - 1] = 0;
	return (words);
}

char	**ft_split_str(char *str, char **words)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] <= 32 && str[i])
			i++;
		j = 0;
		while (str[i] > 32 && str[i] < 127)
		{
			words[k][j] = str[i];
			i++;
			j++;
		}
		if (str[i - 1] > 32 && str[i - 1] < 127)
		{
			words[k][j] = '\0';
			k++;
		}
	}
	return (words);
}

int		ft_scan_str(char *str, int *max_length)
{
	int i;
	int j;
	int nb_word;

	nb_word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] <= 32 && str[i])
		{
			i++;
		}
		j = 0;
		while (str[i] > 32 && str[i] < 127)
		{
			i++;
			j++;
		}
		if (str[i - 1] > 32 && str[i - 1] < 127)
			nb_word++;
		if (j > *max_length)
			*max_length = j;
	}
	return (nb_word + 1);
}
