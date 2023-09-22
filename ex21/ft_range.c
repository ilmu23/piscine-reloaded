/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:00:06 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 00:33:21 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

	if (min >= max)
		return (NULL);
	out = malloc((max - min) * sizeof(int));
	if (!out)
		return (NULL);
	i = 0;
	while (min < max)
		out[i++] = min++;
	return (out);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*arr;
	int	min;
	int	max;
	int	i;

	if (argc != 3)
		return (1);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("range(%d, %d) =", min, max);
	arr = ft_range(min, max);
	if (!arr)
	{
		printf(" (null)\n");
		return (0);
	}
	i = 0;
	while (i < max - min)
		printf(" %d", arr[i++]);
	printf("\n");
	return (0);
}*/
