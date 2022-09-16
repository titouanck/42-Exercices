/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:37:51 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	if (size <= 0)
		return (NULL);
	mem = (char *) malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
