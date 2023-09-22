/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:46:27 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 21:52:07 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
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
	printf("%d! = %d\n", nbr, ft_recursive_factorial(nbr));
	return (0);
}*/
