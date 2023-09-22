/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:17:20 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 21:21:19 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a;
	int b;

	if (argc != 3)
		return (1);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("a = %8d\nb = %8d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %8d\nb = %8d\n", a, b);
	return (0);
}*/
