/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:53:11 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 22:56:19 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem;
	t_list	**stalker;

	stalker = begin_list;
	while ((*cmp)((*stalker)->data, data_ref) && *stalker)
	{
		*begin_list = (*stalker)->next;
		free(*stalker);
		*stalker = *begin_list;
	}
	elem = *begin_list;
	while (*stalker)
	{
		while((*cmp)((*stalker)->data, data_ref) && *stalker)
		{
			elem->next = (*stalker)->next;
			free(*stalker);
			*stalker = elem->next;
		}
		elem = elem->next;
		*stalker = (!(*stalker)) ? (*stalker)->next: *stalker;
	}
}
