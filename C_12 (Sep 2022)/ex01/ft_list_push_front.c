/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:13:49 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:36 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!new)
		return ;
	new->next = *begin_list;
	*begin_list = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem;
// 	t_list	*begin;
// 	int		data1;
// 	int		data2;

// 	data1 = 42;
// 	data2 = 21;
// 	elem.data = &data1;
// 	elem.next = NULL;
// 	begin = &elem;
// 	printf("%d\n", *(int *)(begin)->data);
// 	ft_list_push_front(&begin, &data2);
// 	printf("%d -> %d\n", *(int *)begin->data, *(int *)begin->next->data);
// }
