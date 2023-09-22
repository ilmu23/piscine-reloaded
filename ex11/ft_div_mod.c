/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:22:49 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 21:28:49 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	a;
	int	b;
	int	d;
	int	r;

	if (argc != 3)
		return (1);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_div_mod(a, b, &d, &r);
	printf("%d / %d = %d (remainder %d)\n", a, b, d, r);
	ft_div_mod(b, a, &d, &r);
	printf("%d / %d = %d (remainder %d)\n", b, a, d, r);
	return (0);
}
