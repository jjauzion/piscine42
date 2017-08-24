/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:16:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 17:35:45 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	unsigned int	check_size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	check_size = max - min;
	if (check_size > 2147483647)
		return (0);
	range[0] = malloc(sizeof(**range) * (max - min));
	if (range[0] == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return ((int)check_size);
}
