/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:43:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:10 by tchevrie         ###   ########.fr       */
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

static t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
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

static t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*end_list;
	size_t	len;
	size_t	i;

	if (!begin_list || !*begin_list)
		return ;
	end_list = ft_list_last(*begin_list);
	len = ft_list_size(*begin_list);
	i = 0;
	while (i < (len - 1))
	{
		current = ft_list_at(*begin_list, (len - 2 - i));
		current->next->next = current;
		i++;
	}
	(*begin_list)->next = NULL;
	*begin_list = end_list;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	t_list	*begin;
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
// 	elem3.next = NULL;
// 	begin = &elem1;
// 	while (begin)
// 	{
// 		printf("%d -> ", *(int *)begin->data);
// 		begin = begin->next;
// 	}
// 	printf("\n");
// 	begin = &elem1;
// 	ft_list_reverse(NULL);
// 	ft_list_reverse(&begin);
// 	while (begin)
// 	{
// 		printf("%d -> ", *(int *)begin->data);
// 		begin = begin->next;
// 	}
// }
