/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 00:11:06 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/18 00:15:50 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
		while (cmp(tab[j], tab[j - 1]) < 0 && out == 0)
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
