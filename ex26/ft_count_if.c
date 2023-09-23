/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:55:01 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 16:06:48 by ivalimak         ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc == 1)
		return (1);
	tab = malloc(argc * sizeof(char *));
	tab[argc - 1] = NULL;
	while (argc-- > 0)
		tab[argc - 1] = argv[argc];
	printf("%d\n", ft_count_if(tab, ft_strlen));
	return (0);
}*/
