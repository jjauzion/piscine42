/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:37:00 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 22:56:13 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

//Exo 0 a 4
/*
   char	*ft_strupcase(char *str);
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
//	Exo5 a 10 
void	ft_strupcase(void *str);
int		ft_strcmp(void *s1, void *s2);
t_list	*ft_create_elem(void *data);
void	ft_print_list(t_list *list);
void	ft_print_element(t_list *element);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
t_list 	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int		main(int argc, char **argv)
{
	t_list	*list;
	t_list	*element;

	list = ft_list_push_params(argc, argv);
	ft_print_list(list);

	//	Exo06
/*	printf("\nExo6\n");
		ft_list_clear(&list);
		ft_print_list(list);
		*/

	//Exo07
	printf("\nEx07\n");
	element = ft_list_at(list, 5);	
	ft_print_element(element);

	//Exo8
	printf("\nEx08\n");
	ft_list_reverse(&list);
	ft_print_list(list);

	//Exo9 A COMMENT POUR TESTER LE 10
/*	printf("Ex09\n");
	void	(*fct)(void *);

	fct = &ft_strupcase;
	ft_list_foreach(list, fct);
	ft_print_list(list);
*/
	//Exo10
	printf("\nEx10\n");
	void	(*fct)(void *);
	int		(*cmp)();
	char	str[20] = "test1";

	fct = &ft_strupcase;
	cmp = &ft_strcmp;
	element = ft_list_at(list, 4);	
	ft_print_element(element);
	element->data = str;
	ft_list_foreach_if(list, fct, "test1", cmp);
	ft_print_list(list);

	//Ex11
	printf("\nEx11\n");
	printf("test1:\n");
	element = ft_list_find(list, "   ", cmp);
	ft_print_element(element);
	printf("test2:\n");
	element = ft_list_find(list, "test2", cmp);
	ft_print_element(element);
	printf("test3:\n");
	element = ft_list_find(list, "TEST1", cmp);
	ft_print_element(element);
	printf("test4:\n");
	element = ft_list_find(list, "", cmp);
	ft_print_element(element);

	//Ex12
	printf("\nEx12\n");
	printf("test1:\n");
	ft_list_remove_if(&list, "TEST1", cmp);
	ft_print_list(list);

	ft_list_push_back(&list, "coucou");
	ft_list_push_back(&list, "coucou");
	ft_list_push_back(&list, "coucou");
	ft_print_list(list);
	ft_list_remove_if(&list, "coucou", cmp);
	ft_print_list(list);

	ft_list_push_front(&list, "blop");
	ft_list_push_front(&list, "blop");
	ft_list_push_front(&list, "blop");
	ft_print_list(list);
	ft_list_remove_if(&list, "blop", cmp);
	ft_print_list(list);

	return (0);
}
int		ft_strcmp(void *data1, void *data2)
{
	int i;
	char *s1;
	char *s2;

	s1 = data1;
	s2 = data2;
	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i])
			return (1);
		i++;
	}
	return (0);
}
void	ft_strupcase(void *data)
{
	int i;
	char *str;
	str = data;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
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
	if (element)
		printf("element:\t@:%p\t@next:%p\tdata:%s\n", element, element->next, element->data);
	else
		printf("element point to NULL\n");
}
