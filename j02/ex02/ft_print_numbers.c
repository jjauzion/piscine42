/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:55:50 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/03 10:37:16 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	character;

	i = 0;
	while (i < 10)
	{
		character = i + 48;
		ft_putchar(character);
		i++;
	}
}
