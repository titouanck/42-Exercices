/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:38:45 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 12:37:53 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cw(char const *s, char c)
{
	size_t	words;
	int		first_l;
	size_t	i;

	first_l = 1;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (first_l == 1)
			{
				words++;
				first_l = 0;
			}
		}
		else
			first_l = 1;
		i++;
	}
	return (words);
}

static char	*str_dup(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	split_str(char **tab, char const *s, char c)
{
	int		first_l;
	size_t	index;
	size_t	i;

	index = 0;
	first_l = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (first_l == 1)
			{
				tab[index++] = str_dup(&s[i], c);
				first_l = 0;
			}
		}
		else
			first_l = 1;
		i++;
	}
	tab[index] = 0;
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**tab;

	words = cw(s, c);
	tab = (char **) malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	split_str(tab, s, c);
	return (tab);
}
