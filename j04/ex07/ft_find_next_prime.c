/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:26:24 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/08 13:00:20 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		i = 1;
	else
		i = 0;
	while (!ft_test_prime(nb + i))
	{
		i = i + 2;
	}
	return (nb + i);
}

int		ft_test_prime(int nb)
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
