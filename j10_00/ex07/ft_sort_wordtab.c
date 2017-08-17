/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:48:10 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 23:57:37 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		out;
	char	*tmp;

	i = 1;
	while (tab[i] != 0)
	{
		j = i;
		out = 0;
		while (ft_strcmp(tab[j], tab[j - 1]) < 0 && out == 0)
		{
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
			j--;
			if (j <= 0)
			{
				out = 1;
				j = 1;
			}
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
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
