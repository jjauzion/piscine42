/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:10:36 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/16 21:11:44 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *return_tab;

	return_tab = malloc(sizeof(*return_tab) * length);
	i = 0;
	while (i < length)
	{
		return_tab[i] = f(tab[i]);
		i++;
	}
	return (return_tab);
}
