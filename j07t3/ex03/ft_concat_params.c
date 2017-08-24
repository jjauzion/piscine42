/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:15:29 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/17 17:05:38 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_lenstr(char *str);
int		ft_totalen(int nb, char **str);
char	*ft_strcatn(char *dest, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc <= 1)
		return ("");
	str = malloc(sizeof(*str) * (ft_totalen(argc, argv) + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 1;
	while (i < argc)
	{
		str = ft_strcatn(str, argv[i]);
		i++;
	}
	str[ft_totalen(argc, argv) - 2] = '\0';
	return (str);
}

char	*ft_strcatn(char *dest, char *src)
{
	int i;
	int length;

	length = ft_lenstr(dest);
	i = 0;
	while (src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\n';
	dest[length + i + 1] = '\0';
	return (dest);
}

int		ft_totalen(int nb_of_arg, char **argv)
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (i < nb_of_arg)
	{
		len = len + ft_lenstr(argv[i]) + 1;
		i++;
	}
	len++;
	return (len);
}

int		ft_lenstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
