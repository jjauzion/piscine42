/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:12:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/15 15:51:16 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_check_base(char *str);
int				ft_ctoi(char *nbr, char *base, unsigned int size);
int				ft_power(int nb, int power);
char			*ft_itoc(unsigned int nbr, char *base, unsigned int size);

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb_in;
	int				i;
	char			*nb_out;
	char			tmp;
	int				length;

	if (ft_check_base(base_from) <= 1 || ft_check_base(base_to) <= 1)
		return (NULL);
	nb_in = ft_ctoi(nbr, base_from, ft_check_base(base_from));
	if (nb_in < 0)
		return (NULL);
	nb_out = ft_itoc(nb_in, base_to, ft_check_base(base_to));
	length = 0;
	while (nb_out[length])
		length++;
	i = 0;
	while (i < length / 2)
	{
		tmp = nb_out[i];
		nb_out[i] = nb_out[length - 1 - i];
		nb_out[length - 1 - i] = tmp;
		i++;
	}
	return (nb_out);
}

char			*ft_itoc(unsigned int nbr, char *base, unsigned int size)
{
	int		i;
	char	*res;
	int		length;

	i = 0;
	length = nbr;
	while (length >= 10)
	{
		length = length / 10;
		i++;
	}
	length = (i + 1) / 3 * 10 + 7;
	res = malloc(sizeof(*res) * (length + 2));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (nbr >= size)
	{
		res[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	res[i] = base[nbr];
	res[i + 1] = '\0';
	return (res);
}

int				ft_ctoi(char *nbr, char *base, unsigned int size)
{
	int	nb;
	int	i;
	int	j;
	int	nb_len;

	nb = 0;
	nb_len = 0;
	while (nbr[nb_len])
		nb_len++;
	i = 0;
	while (nbr[i])
	{
		j = 0;
		while (nbr[i] != base[j] && base[j])
			j++;
		if (!base[j])
			return (-1);
		nb = nb + j * ft_power(size, nb_len - i - 1);
		i++;
	}
	return (nb);
}

int				ft_power(int nb, int power)
{
	int result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb * ft_power(nb, power - 1);
	return (result);
}

unsigned int	ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}
