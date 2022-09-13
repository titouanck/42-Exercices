/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:40:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:46 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
		free(*ap);
	*ap = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	void	*ptr;
// 	size_t	i;

// 	ptr = malloc(10);
// 	if (!ptr)
// 		return (0);
// 	i = 0;
// 	while (i < (10 - 1))
// 	{
// 		*(unsigned char *)(ptr + i) = 'a';
// 		i++;
// 	}
// 	ft_memdel(&ptr);
// }
