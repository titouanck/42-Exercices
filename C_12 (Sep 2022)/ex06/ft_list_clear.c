/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:28:21 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:18 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// static void	free_elem(void *elem)
// {
// 	size_t	size;
// 	size_t	i;

// 	size = sizeof(*elem);
// 	i = 0;
// 	while (i < size)
// 	{
// 		*(unsigned char *)(elem + i) = 0;
// 		i++;
// 	}
// }

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	if (!begin_list || !free_fct)
		return ;
	ft_list_clear(begin_list->next, free_fct);
	free_fct(begin_list->data);
	free(begin_list);
	return ;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	int		data1;
// 	int		data2;

// 	elem1 = malloc(sizeof(t_list));
// 	elem2 = malloc(sizeof(t_list));
// 	if (!elem1 || !elem2)
// 		return (1);
// 	data1 = 42;
// 	data2 = 21;
// 	elem1->data = &data1;
// 	elem1->next = elem2;
// 	elem2->data = &data2;
// 	elem2->next = NULL;
// 	printf("%d", *(int *)elem2->data);
// 	ft_list_clear(elem1, free_elem);
// 	// printf("%d", *(int *)elem2->data);
// }
