/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 11:09:51 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/20 20:38:28 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
void ft_printf_queue(char *str, char *queue);
void ft_printf_stack(char *str, char *stack);
typedef struct	s_opp
{
	char	opp;
	int		prio;
	int		(*fct)(int, int);
}				t_opp;
extern 			t_opp g_opptab[5];

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strdup(char *src);

int				eval_expr(char *expr);
void			ft_malloc_str(char **str, char *expr);
int				ft_check_opp(char c);
int				ft_stack(char opp, char *queue, int q, char *stack);
int				ft_is_hioreq_prio(char opp1, char opp2);
int				ft_stack_out(int q, char *queue, char *stack);

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);

#endif
