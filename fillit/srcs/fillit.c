/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:05:41 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 12:33:26 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

// int	check_file(int fd)
// {
// 	char	buf;
// 	size_t	nb;
// 	size_t	tetriminos;
// 	size_t	hashtags;

// 	buf = 0;
// 	nb = 1;
// 	tetriminos = 0;
// 	while (nb)
// 	{
// 		nb = read(fd, &buf, 1);
// 		if (buf)
// 			ft_putchar(buf);
// 		if ((buf != '#' && buf != '.') && (nb % 4))
// 			return (0);
// 	}
// 	return (1);
// }

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || !check_file(fd))
	{
		ft_putstr("error.\n");
		return (1);
	}
}
