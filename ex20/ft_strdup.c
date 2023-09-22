/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:33:47 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 23:59:02 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		slen;
	int		i;

	slen = ft_strlen(src);
	out = malloc((slen + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (i < slen)
		out[i++] = *src++;
	out[i] = '\0';
	return (out);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 1)
		return (1);
	i = 1;
	while (i < argc)
	{
		printf("%d:\n", i);
		printf("org: %s\n", argv[i]);
		s = ft_strdup(argv[i++]);
		printf("dup: %s\n", s);
		free(s);
	}
	return (0);
}*/
