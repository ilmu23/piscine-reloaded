/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:15:21 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 16:19:22 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_puterr(int err)
{
	if (err == 1)
		ft_putstr_fd(2, "File name missing.\n");
	else if (err == 2)
		ft_putstr_fd(2, "Cannot read file.\n");
	else if (err == 3)
		ft_putstr_fd(2, "Too many arguments.\n");
	else
		ft_putstr_fd(2, "Unkown error.\n");
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *s)
{
	while (*s)
		ft_putchar_fd(fd, *s++);
}
