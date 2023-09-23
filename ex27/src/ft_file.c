/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:28:13 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 16:56:12 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_readfile(int fd)
{
	char	buf[1];
	int		rv;

	rv = 0;
	while (rv != -1)
	{
		rv = read(fd, buf, 1);
		if (rv == 0)
			return ;
		ft_putchar_fd(1, buf[0]);
	}
	ft_puterr(2);
}
