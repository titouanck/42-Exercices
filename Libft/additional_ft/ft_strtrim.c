/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/08/01 13:05:34 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	real_size(char const *s, size_t *start, size_t *end)
{
	long	size;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (0);
	size = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		size--;
		i++;
	}
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > 0)
	{
		size--;
		j--;
	}
	if (size < 0)
		return (0);
	*start = i;
	*end = j;
	return (size);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	size;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	size = real_size(s, &start, &end);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end && size != 0)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
