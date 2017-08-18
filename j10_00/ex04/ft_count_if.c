/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:39:15 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 08:48:39 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int cpt;

	cpt = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			cpt++;
		i++;
	}
	return (cpt);
}