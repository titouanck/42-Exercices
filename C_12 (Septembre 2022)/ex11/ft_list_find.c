/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:23:12 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:31:31 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// static int	ft_strcmp(char *s1, char *s2)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
			return (current);
		current = current->next;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	char	s1[] = "Titouan";
// 	char	s2[] = "TiToUaN";
// 	char	s3[] = "Nauotit";

// 	elem1.data = s1;
// 	elem1.next = &elem2;
// 	elem2.data = s2;
// 	elem2.next = &elem3;
// 	elem3.data = s3;
// 	elem3.next = 0;
// 	printf("%s\n", (char *)ft_list_find(&elem1, "TiToUaN", &ft_strcmp)->data);
// }
