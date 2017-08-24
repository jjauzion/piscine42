/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:04:35 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/24 18:56:44 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_opp
{
	char	opp;
	void	(*fct)(char **ptr);
}				t_opp;

typedef struct	s_list
{
	int				data;
	struct s_list	*next;
}				t_list;

void	f_next(char **code)
{
	*code = *code + 1;
}

void	f_prev(char **code)
{
	*code = *code - 1;
}

void	f_plus(char **code)
{
	**code = **code + 1;
}

void	f_moins(char **code)
{
	**code = **code - 1;
}

void	f_point(char **code)
{
	printf("------------------------\n");
	printf("%c", **code);
}

t_opp	opptab[] = 
{
	{'>', &f_next},
	{'<', &f_prev},
	{'+', &f_plus},
	{'-', &f_moins},
	{'.', &f_point}
};

void	ft_push_front(t_list **list, int data)
{
	t_list	*elem;

	if (!(elem = malloc(sizeof(t_list))))
		return ;
	elem->data = data;
	elem->next = *list;
	*list = elem;
}

void	ft_print_code(char **code)
{
	int i;

	i = -1;
	while(++i < 16)
		printf("%i | ", **code);
	printf("\n");
}

int		main(int argc, char **argv)
{
	char	**code;
	int		i;
	int		j;
	t_list	*bracket;
	void	*tmp;
	
	if (argc < 2)
		return (0);
	if (!(code = malloc(sizeof(char *))))
		return (0);
	if (!(code[0] = malloc(sizeof(char) * 2049)))
		return (0);
	i = -1;
	while (++i < 2048)
		code[0][i] = 0;
	i = 0;
	bracket = NULL;
	while (argv[1][i])
	{
		printf("\n1argv[1][%i]=%c\n", i, argv[1][i]);
		ft_print_code(code);
		if (argv[1][i] == '[')
		{
			ft_push_front(&bracket, i);
			i++;
			if (**code == 0)
			{
				while (argv[1][i] != ']')
				{
					printf("cherche! argv[1][%i]=%c\n", i, argv[1][i]);
					i++;
				}
			}
		}
		if (argv[1][i] == ']')
		{
			if (**code != 0)
			{
				i = bracket->data;
				tmp = bracket->next;
				free(bracket);
				bracket = tmp;
			}
		}			
		printf("2argv[1][%i]=%c\n", i, argv[1][i]);
		j = 0;
		while (j < 5)
		{
			if (opptab[j].opp == argv[1][i])
			{
				opptab[j].fct(code);
			}
			j++;
		}
		i++;
	}
}
