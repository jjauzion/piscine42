/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex6main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 08:49:33 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/16 09:56:10 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"

struct 	s_stock_par *ft_param_to_tab(int ac, char **av);

int		main(int argc, char **argv)
{
	t_stock_par		*para;

	para = ft_param_to_tab(argc, argv);
	return (0);
}