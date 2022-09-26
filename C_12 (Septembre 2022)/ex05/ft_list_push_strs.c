/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:06:43 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:22 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*previous;
	t_list	*new;

	if (!size || !strs)
		return (NULL);
	i = 0;
	previous = 0;
	while (i < size && strs[i])
	{
		new = ft_create_elem(strs[i]);
		if (previous)
			new->next = previous;
		previous = new;
		i++;
	}
	return (new);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	**tab;
// 	t_list	*begin;

// 	tab = malloc(sizeof(char *) * 3);
// 	if (!tab)
// 		return (1);
// 	tab[0] = "Titouan";
// 	tab[1] = "Nauotit";
// 	tab[2] = "TiToUaN";
// 	begin = ft_list_push_strs(0, 0);
// 	begin = ft_list_push_strs(3, tab);
// 	while (begin)
// 	{
// 		printf("%s\n", (char *)begin->data);
// 		begin = begin->next;
// 	}
// }
