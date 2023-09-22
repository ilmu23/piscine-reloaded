/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:55:34 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 22:11:30 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (nb - n >= 0)
	{
		nb = nb - n;
		n = n + 2;
		i++;
	}
	if (nb == 0)
		return (i);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
		return (1);
	n = atoi(argv[1]);
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
	return (0);
}*/
