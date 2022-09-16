/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:53:56 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:27 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!new || !begin_list || !(*begin_list))
		return ;
	while ((*begin_list)->next)
		begin_list = &(*begin_list)->next;
	(*begin_list)->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	*begin;
// 	int		data1;
// 	int		data2;
// 	int		data3;

// 	data1 = 4;
// 	data2 = 8;
// 	data3 = 15;
// 	elem1.data = &data1;
// 	elem1.next = &elem2;
// 	elem2.data = &data2;
// 	elem2.next = 0;
// 	begin = &elem1;
// 	ft_list_push_back(NULL, NULL);
// 	ft_list_push_back(&begin, &data3);
// 	while (begin)
// 	{
// 		printf("%d -> ", *(int *)begin->data);
// 		begin = begin->next;
// 	}
// }
