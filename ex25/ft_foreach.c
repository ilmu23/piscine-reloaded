/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:11:49 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 15:51:50 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length-- > 0)
		f(*tab++);
}
/*
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void	ft_putchar(char c);

void	ft_strrev(char *s)
{
	char	t;
	int		i;
	int		j;

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		t = s[i];
		s[i++] = s[j];
		s[j--] = t;
	}
}

char	*ft_itoa(int n)
{
	char	*out;
	int		min;
	int		neg;
	int		i;

	min = 0;
	neg = 0;
	if (n == INT_MIN)
	{
		min = 1;
		n++;
	}
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	out = malloc(12 * sizeof(char));
	i = 0;
	while (n > 9)
	{
		out[i++] = n % 10 + '0';
		n = n / 10;
	}
	out[i++] = n + '0';
	if (min == 1)
		*out = '8';
	if (neg == 1)
		out[i++] = '-';
	out[i] = '\0';
	ft_strrev(out);
	return (out);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_putnbr(int n)
{
	char	*tmp;

	tmp = ft_itoa(n);
	ft_putstr(tmp);
	ft_putchar('\n');
	free(tmp);
}

int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	if (argc == 1)
		return (1);
	arr = malloc((argc - 1) * sizeof(int));
	i = 0;
	while (i++ < argc - 1)
		arr[i - 1] = atoi(argv[i]);
	ft_foreach(arr, i - 1, ft_putnbr);
	free(arr);
	return (0);
}*/
