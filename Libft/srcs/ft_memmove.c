/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/08/01 13:05:34 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buf;
	char	*d;
	char	*s;
	size_t	i;

	buf = (char *) malloc(n * sizeof(char));
	d = (char *) dest;
	s = (char *) src;
	i = 0;
	while (i < n)
	{
		buf[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = buf[i];
		i++;
	}
	free(buf);
	return (dest);
}
