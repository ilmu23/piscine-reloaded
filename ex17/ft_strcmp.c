/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:26:25 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 22:35:56 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("strcmp:%11d\n", (int)strcmp(argv[1], argv[2]));
	printf("ft_strcmp:%8d\n", (int)ft_strcmp(argv[1], argv[2]));
	return (0);
}*/
