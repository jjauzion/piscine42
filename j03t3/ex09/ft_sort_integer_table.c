/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:05:12 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/05 14:26:25 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			j = i;
			while (*(tab + j) > *(tab + j + 1) && j >= 0)
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp;
				j--;
			}
		}
		i++;
	}
}
