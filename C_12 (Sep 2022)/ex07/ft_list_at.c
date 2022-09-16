/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:31:43 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:13 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	i = 0;
	current = begin_list;
	while (i < nbr)
	{
		if (!current || !current->next)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	int		data1;
// 	int		data2;
// 	int		data3;

// 	data1 = 4;
// 	data2 = 8;
// 	data3 = 15;
// 	elem1.data = &data1;
// 	elem2.data = &data2;
// 	elem3.data = &data3;
// 	elem1.next = &elem2;
// 	elem2.next = &elem3;
// 	elem3.next = 0;
// 	printf("4 : %d\n", *(int *)ft_list_at(&elem1, 0)->data);
// 	printf("8 : %d\n", *(int *)ft_list_at(&elem1, 1)->data);
// 	printf("15 : %d\n", *(int *)ft_list_at(&elem1, 2)->data);
// 	printf("(null) : %p\n", ft_list_at(&elem1, 3));
// 	printf("(null) : %p\n", ft_list_at(0, 3));
// }
