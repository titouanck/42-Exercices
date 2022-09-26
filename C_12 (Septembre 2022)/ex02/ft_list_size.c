/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:37:50 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 11:43:07 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
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

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;

// 	elem1.next = &elem2;
// 	elem2.next = &elem3;
// 	elem3.next = 0;
// 	printf("0 : %d\n", ft_list_size(NULL));
// 	printf("3 : %d\n", ft_list_size(&elem1));
// 	printf("1 : %d\n", ft_list_size(&elem3));
// }
