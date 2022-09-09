/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:24:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:25:45 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret_value;
	char	buf [2];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Unable to load file.\n", 21);
		return ;
	}
	ret_value = fd;
	buf[0] = 0;
	while (ret_value)
	{
		if (buf[0])
			ft_putchar(buf[0]);
		ret_value = read(fd, buf, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(STDERR_FILENO, "File name missing.\n", 19);
	else if (argc > 2)
		write(STDERR_FILENO, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
