/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:37:28 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printnbr(long n)
{
	if (n < 10)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
}

void	ft_putnbr(int n)
{
	long	nb;

	if (n < 0)
	{
		write(1, "-", 1);
		nb = (long) n * (-1);
	}
	else
		nb = n;
	ft_printnbr(nb);
}
