/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:19:09 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 15:02:00 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static int	ft_list_size(t_list *begin_list)
{
	int	elems;

	elems = 0;
	while (begin_list)
	{
		elems++;
		begin_list = begin_list->next;
	}
	return (elems);
}

static void	void_swap(t_list *e1, t_list *e2)
{
	void	*tmp_data;

	tmp_data = e1->data;
	e1->data = e2->data;
	e2->data = tmp_data;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	size_t	len;
	t_list	*current;
	size_t	i;

	if (!begin_list)
		return ;
	len = ft_list_size(begin_list);
	while (len > 1)
	{
		current = begin_list;
		i = 0;
		while (i < len - 1)
		{
			void_swap(current, current->next);
			current = current->next;
			i++;
		}
		len--;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	e1;
// 	t_list	e2;
// 	t_list	e3;
// 	t_list	e4;
// 	t_list	e5;
// 	t_list	e6;
// 	int		data1;
// 	int		data2;
// 	int		data3;
// 	int		data4;
// 	int		data5;
// 	int		data6;
// 	t_list	*current;

// 	data1 = 4;
// 	data2 = 8;
// 	data3 = 15;
// 	data4 = 16;
// 	data5 = 23;
// 	data6 = 42;
// 	e1.data = &data1;
// 	e2.data = &data2;
// 	e3.data = &data3;
// 	e4.data = &data4;
// 	e5.data = &data5;
// 	e6.data = &data6;
// 	e1.next = &e2;
// 	e2.next = &e3;
// 	e3.next = &e4;
// 	e4.next = &e5;
// 	e5.next = &e6;
// 	e6.next = 0;
// 	current = &e1;
// 	while (current)
// 	{
// 		printf("%d -> ", *(int *)current->data);
// 		current = current->next;
// 	}
// 	ft_list_reverse_fun(&e1);
// 	printf("\n");
// 	current = &e1;
// 	while (current)
// 	{
// 		printf("%d -> ", *(int *)current->data);
// 		current = current->next;
// 	}
// }
