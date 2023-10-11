/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:55:01 by ivalimak          #+#    #+#             */
/*   Updated: 2023/10/11 20:12:01 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	out;

	out = 0;
	while (*tab)
		if (f(*tab++) == 1)
			out++;
	return (out);
}
/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	isupcase(char *s)
{
	while (*s)
	{
		if(isupper(*s) == 0 && isdigit(*s) == 0)
			break ;
		else
			s++;
	}
	if (*s)
		return (0);
	return (1);
}

int	islowcase(char *s)
{
	while (*s)
	{
		if(islower(*s) == 0 && isdigit(*s) == 0)
			break ;
		else
			s++;
	}
	if (*s)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int		f;

	if (argc < 3)
		return (1);
	argv++;
	f = atoi(*argv);
	argv++;
	if (f == 1)
		printf("%d\n", ft_count_if(argv, isupcase));
	else if (f == 2)
		printf("%d\n", ft_count_if(argv, islowcase));
	else
		printf("Unknown option for function (1 = isupcase, 2 = islowcase\n");
	return (0);
}*/
