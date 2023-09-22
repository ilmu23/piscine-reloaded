/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:42:18 by ivalimak          #+#    #+#             */
/*   Updated: 2023/09/22 23:31:16 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_strswp(char **strs, int i, int j)
{
	char	*s;

	s = strs[i];
	strs[i] = strs[j];
	strs[j] = s;
}

void	ft_strsrt(char **strs, int len)
{
	int		i;
	int		j;

	i = -1;
	while (i++ < len)
	{
		j = i;
		while (j++ < len)
			if (ft_strcmp(strs[i], strs[j]) > 0)
				ft_strswp(strs, i, j);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	ft_strsrt(argv + 1, argc - 2);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
