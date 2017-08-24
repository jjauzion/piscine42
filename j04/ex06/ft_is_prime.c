/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 22:17:03 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/08 12:19:01 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i = i + 2;
	}
	return (1);
}