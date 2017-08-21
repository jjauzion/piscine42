/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:59:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 17:39:45 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	void	*bwd;
	void	*fwd;

	bwd = 0;
	while ((*begin_list))
	{
		fwd = (*begin_list)->next;
		(*begin_list)->next = bwd;
		bwd = *begin_list;
		*begin_list = fwd;
	}
	*begin_list = bwd;
}
