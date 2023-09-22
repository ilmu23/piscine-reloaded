/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:34:12 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/23 00:58:50 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) (Value = ft_abs(Value));

int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

#endif
