/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:37:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 17:34:13 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

//Exo 0 a 4
/*
t_list	*ft_create_elem(void *data);
void	ft_print_list(t_list *list);
void	ft_print_element(t_list *element);

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_last(t_list *begin_list);

int		main(int argc, char **argv)
{
	t_list	*list;
	t_list	*last_elem;
	t_list	element;
	void	*data;
	char	*str;
	int		cpt;
	cpt = argc;
	str = argv[0];

	str = "element0";
	data = str;
	list = ft_create_elem(data);
	printf("elem created\n");
	str = "element1";
	data = str;
	ft_list_push_back(&list, data);
	cpt = ft_list_size(list);
	str = "element2";
	data = str;
	ft_list_push_front(&list, data);
	cpt = ft_list_size(list);
	printf("cpt:%i\n",cpt);
	ft_print_list(list);
	last_elem = ft_list_last(list);
	element = *last_elem;
	ft_print_element(last_elem);
	printf("last2:\t@:%p\t@next:%p\tdata:%s\n", &element, element.next, element.data);
	return (0);
}
*/
//	Exo5 et 6
t_list	*ft_create_elem(void *data);
void	ft_print_list(t_list *list);
void	ft_print_element(t_list *element);

t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **list);

int		main(int argc, char **argv)
{
	t_list	*list;
	t_list	*element;

	list = ft_list_push_params(argc, argv);
	ft_print_list(list);

//	Exo06
/*	ft_list_clear(&list);
	ft_print_list(list);
*/
	//Exo07
	element = ft_list_at(list, 3);	
	ft_print_element(element);

	//Exo8
	printf("ici1\n");
	ft_list_reverse(&list);
	printf("ici2\n");
	ft_print_list(list);

	return (0);
}

void		ft_print_list(t_list *list)
{
	int i;
	i = 0;
	while (list)
	{
		printf("E[%i]:\t@:%p\t@next:%p\tdata:%s\n", i, list, list->next, list->data);
		i++;
		list = list->next;
	}
}

void		ft_print_element(t_list *element)
{
	printf("element:\t@:%p\t@next:%p\tdata:%s\n", element, element->next, element->data);
}
