/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:16:57 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 12:13:01 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%lu : %lu\n", ft_strlen("Bonjour."), strlen("Bonjour."));
// 	printf("%lu : %lu\n", ft_strlen(""), strlen(""));
// }