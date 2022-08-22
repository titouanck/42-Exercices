/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/08/01 13:05:34 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	n_len;
	size_t	i;
	size_t	j;

	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j == n_len)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
