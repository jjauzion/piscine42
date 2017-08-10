/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:41:10 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/09 21:40:20 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main (int argc, char **argv)
{
	int i;
	
	i = argc;
	//Exo0
//	i = ft_iterative_factorial(atoi(argv[1]));
//	printf("facto_ite=%i\n", i);

	//Exo1
//	i = ft_recursive_factorial(atoi(argv[1]));
//	printf("facto_recu=%i\n", i);

	//Exo2
//	i = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
//	printf("power_ite=%i\n", i);

	//Exo3
	i = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("power_recu=%i\n", i);

	//Exo4
//	printf("fibonacci(%i)=%i\n", i, ft_fibonacci(atoi(argv[1])));

	//Exo5
//	printf("sqrt=%i\n", ft_sqrt(atoi(argv[1])));
//	printf("sqrt2=%i\n", sqrt2(atoi(argv[1])));

	//Exo6
//	printf("Is_prime=%i\n", ft_is_prime(atoi(argv[1])));

	//Exo7
//	printf("Next_prime=%i\n",ft_find_next_prime(atoi(argv[1])));
	
	

	return (0);
}
