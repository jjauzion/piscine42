/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:40:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/13 13:29:25 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search(int *cpt, int i, int j, char *str, char *find);

int		match(char *s1, char *s2)
{
	int cpt;
	int *pcpt;
	int trash;

	cpt = 0;
	pcpt = &cpt;
	trash = ft_search(pcpt, 0, 0, s1, s2);
	return (cpt);
}

int		ft_search(int *cpt, int i, int j, char *str, char *find)
{
	if (!str[i] && !find[j])
	{
		*cpt = *cpt + 1;
		return(1);
	}
	else
	{
		if (str[i] == find[j])
			return (ft_search(cpt, i + 1, j + 1, str, find));
		else if (find[j] == '*')
		{
			if(!ft_search(cpt, i, j + 1, str, find) && str[i])
				return (ft_search(cpt, i + 1, j, str, find));
		}
		else
			return (0);
		return(666);
	}
}
