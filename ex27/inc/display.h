/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:09:50 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 16:20:15 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H
# include <fcntl.h>
# include <unistd.h>

void	ft_puterr(int err);
void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *s);

void	ft_readfile(int fd);
#endif
