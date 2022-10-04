/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:23:54 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:21:12 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	racine;

	racine = 1;
	while (racine * racine < nb)
		racine++;
	if (racine * racine == nb)
		return (racine);
	else
		return (0);
}
