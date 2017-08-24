/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:24:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/06 21:47:02 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenstr(char *str);

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < ft_lenstr(str) / 2)
	{
		tmp = *(str + i);
		*(str + i) = *(str + (ft_lenstr(str) - 1 - i));
		*(str + (ft_lenstr(str) - 1 - i)) = tmp;
		i++;
	}
	return (str);
}

int		ft_lenstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}
