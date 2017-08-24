/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:38:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/20 20:18:11 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*str;

	length = ft_strlen(src);
	str = malloc(sizeof(*src) * (length + 1));
	if (str == NULL)
		return (str);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
