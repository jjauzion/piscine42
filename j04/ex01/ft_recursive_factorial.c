/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:40:06 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/09 21:37:22 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	else
		return (1);
	return (result);
}
