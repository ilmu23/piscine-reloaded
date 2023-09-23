/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:08:54 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 16:32:29 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_puterr(argc);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_puterr(2);
		return (1);
	}
	ft_readfile(fd);
	close(fd);
	return (0);
}
