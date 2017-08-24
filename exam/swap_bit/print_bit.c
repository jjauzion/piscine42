/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:49:18 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/24 14:04:14 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned char	*bin(unsigned char c)
{
	unsigned char	*bit;
	int 	i;

	if(!(bit = malloc(sizeof(c) * 8 + 1)))
		return (0);
	i = sizeof(c) * 8;
	while (i >= 0)
	{
		bit[i] = '0';
		i--;
	}
	bit[sizeof(c) * 8] = '\0';
	i = sizeof(c) * 8 - 1;
	while (c)
	{
		bit[i] = '0' + (c & 1);
		c = c >> 1;
		i--;
	}
	return (bit);
}

unsigned char	swap_bit(unsigned char c)
{
	return (((c & 0x0F) << 4) | (c >> 4));
}


int main ()
{
	unsigned char c;

	c = 'z' + 1;
	printf("valeur binaire de %c :\n%s\n", c, bin(c));
	printf("swap bit:\n%s\n", bin(swap_bit(c)));
	return (0);
}
