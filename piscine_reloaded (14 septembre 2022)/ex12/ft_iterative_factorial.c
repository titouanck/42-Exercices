/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:08:42 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:23:54 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		total = 1;
		while (nb >= 1)
		{
			total = total * nb;
			nb--;
		}
		return (total);
	}
	else
		return (0);
}
