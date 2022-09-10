/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:37:26 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printnbr(long n, int fd)
{
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else
	{
		ft_printnbr(n / 10, fd);
		ft_printnbr(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = (long) n * (-1);
	}
	else
		nb = n;
	ft_printnbr(nb, fd);
}
