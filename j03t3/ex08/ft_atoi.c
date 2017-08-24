/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 12:53:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/05 18:23:35 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_skip_space(char *str);
int		ft_check_sign(char *str, int *ptr_i);
int		ft_calcul(char *str, int i);

int		ft_atoi(char *str)
{
	int result;
	int i;
	int *ptr_i;
	int sign;

	i = ft_skip_space(str);
	ptr_i = &i;
	sign = ft_check_sign(str, ptr_i);
	result = ft_calcul(str, i);
	result = result * sign;
	return (result);
}

int		ft_calcul(char *str, int i)
{
	int result;
	int out;

	result = 0;
	out = 0;
	while (out == 0 && str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - 48;
		else
			out = 1;
		i++;
	}
	return (result);
}

int		ft_check_sign(char *str, int *i)
{
	int sign;

	sign = 1;
	if (str[*i] == '+')
		*i = *i + 1;
	else
	{
		if (str[*i] == '-')
		{
			*i = *i + 1;
			sign = -1;
		}
	}
	return (sign);
}

int		ft_skip_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}
