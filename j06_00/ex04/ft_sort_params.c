/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:50:41 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/13 23:14:23 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_display(char **str, int size);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	while (i <= argc - 1)
	{
		j = i;
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j >= 2)
		{
			tmp = argv[j];
			argv[j] = argv[j - 1];
			argv[j - 1] = tmp;
			j--;
		}
		i++;
	}
	ft_display(argv, argc);
	return (0);
}

int		ft_display(char **str, int size)
{
	int i;
	int j;

	i = 1;
	while (i <= size - 1)
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i])
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
