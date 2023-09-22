/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:33:29 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 21:45:10 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;
	int	i;

	i = 1;
	sum = 1;
	while (i <= nb)
		sum = sum * i++;
	return (sum);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nbr;
	if (argc != 2)
		return (1);
	nbr = atoi(argv[1]);
	printf("%d! = %d\n", nbr, ft_iterative_factorial(nbr));
	return (0);
}*/
