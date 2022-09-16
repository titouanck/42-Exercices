/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:01:37 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:03 by tchevrie         ###   ########.fr       */
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
// 		*(unsigned char *)(elem + i) = 42;
// 		i++;
// 	}
// }

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		f(current->data);
		current = current->next;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	int		data1;
// 	int		data2;
// 	t_list	*begin;

// 	data1 = 4;
// 	data2 = 8;
// 	elem1.data = &data1;
// 	elem1.next = &elem2;
// 	elem2.data = &data2;
// 	elem2.next = NULL;
// 	begin = &elem1;
// 	while (begin)
// 	{
// 		printf("%d -> ", *(int *)begin->data);
// 		begin = begin->next;
// 	}
// 	begin = &elem1;
// 	ft_list_foreach(begin, &free_elem);
// 	printf("\n");
// 	while (begin)
// 	{
// 		printf("%d -> ", *(int *)begin->data);
// 		begin = begin->next;
// 	}
// }
