/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:18:20 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 22:50:29 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	if (ac <= 1)
		return (0);
	list = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		ft_list_pushback(&list, av[i]);
		i++;
	}
	return (list);
}

void	ft_list_pushback(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}
