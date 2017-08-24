/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:40:08 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/13 21:42:52 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search(int *cpt, char *str, char *find);

int		match(char *s1, char *s2)
{
	int cpt;
	int *pcpt;

	cpt = 0;
	pcpt = &cpt;
	ft_search(pcpt, s1, s2);
	return (cpt);
}

int		ft_search(int *cpt, char *str, char *find)
{
	if (!*str && !*find)
	{
		*cpt = *cpt + 1;
		return (1);
	}
	else
	{
		if (*str == *find && *str != '*')
			return (ft_search(cpt, ++str, ++find));
		else if (*find == '*')
		{
			if (!ft_search(cpt, str, ++find) && *str)
				return (ft_search(cpt, ++str, --find));
		}
		else
			return (0);
		return (666);
	}
}
