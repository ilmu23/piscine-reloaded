/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:18:31 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 22:25:46 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%d:\n", i);
		printf("strlen:%11d\n", strlen(argv[i]));
		printf("ft_strlen:%8d\n", ft_strlen(argv[i++]));
	}
	return (0);
}*/
