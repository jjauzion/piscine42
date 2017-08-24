/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:35:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/08 11:35:13 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	double	r;
	double	nbr;
	int		racine;

	nbr = nb;
	if (nb <= 0)
		return (0);
	r = nbr / 2;
	while ((r * r <= nbr - 1) || (r * r >= nbr + 1))
	{
		r = r + (nbr - r * r) / (2 * r);
	}
	racine = r / 1;
	if ((racine * racine) == nb)
		return (racine);
	else
		return (0);
}
