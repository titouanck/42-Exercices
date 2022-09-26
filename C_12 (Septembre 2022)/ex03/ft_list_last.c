/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:43:53 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 11:53:30 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	int		data1;
// 	int		data2;

// 	data1 = 42;
// 	data2 = 21;
// 	elem1.data = &data1;
// 	elem1.next = &elem2;
// 	elem2.data = &data2;
// 	elem2.next = 0;
// 	printf("0x0 :%p\n", ft_list_last(NULL));
// 	printf("21 : %d\n", *(int *)ft_list_last(&elem1)->data);
// 	printf("21 : %d\n", *(int *)ft_list_last(&elem2)->data);
// }
