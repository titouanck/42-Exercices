/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:48:15 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/16 15:56:26 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!begin_list1 || !(*begin_list1) || !begin_list2)
		return ;
	while ((*begin_list1)->next)
		begin_list1 = &((*begin_list1)->next);
	(*begin_list1)->next = begin_list2;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	t_list	*current;
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
// 	elem3.data = &data3;
// 	elem3.next = 0;
// 	current = &elem1;
// 	while (current)
// 	{
// 		printf("%d -> ", *(int *)current->data);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	current = &elem1;
// 	ft_list_merge(&current, &elem3);
// 	while (current)
// 	{
// 		printf("%d -> ", *(int *)current->data);
// 		current = current->next;
// 	}
// }
