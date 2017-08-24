/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:24:23 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/14 22:31:54 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		ft_putchar('\0');
	else
		while (*(str + i) != 0)
		{
			ft_putchar(*(str + i));
			i++;
		}
}
