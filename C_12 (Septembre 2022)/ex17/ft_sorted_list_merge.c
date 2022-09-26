/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:02:22 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 15:12:09 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// static int	ft_strcmp(char *s1, char *s2)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	size_t	len;
	size_t	i;
	t_list	*current;

	if (!begin_list || !(*begin_list) || !cmp)
		return ;
	len = ft_list_size(*begin_list);
	i = 0;
	while (i < len)
	{
		current = *begin_list;
		while (current && current->next)
		{
			if (cmp(current->data, current->next->data) > 0)
				void_swap(current, current->next);
			current = current->next;
		}
		i++;
	}
}

static t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_sorted_list_merge(t_list **begin_l1, t_list *begin_l2, int (*cmp)())
{
	t_list	*end_l1;

	if (!begin_l1 || !(*begin_l1) || !begin_l2 || !cmp)
		return ;
	end_l1 = ft_list_last(*begin_l1);
	end_l1->next = begin_l2;
	ft_list_sort(begin_l1, cmp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	t_list	elem4;
// 	t_list	elem5;
// 	t_list	*current;

// 	elem1.data = "z";
// 	elem2.data = "e";
// 	elem3.data = "a";
// 	elem4.data = "s";
// 	elem5.data = "c";
// 	elem1.next = &elem2;
// 	elem2.next = &elem3;
// 	elem3.next = 0;
// 	elem4.next = &elem5;
// 	elem5.next = 0;
// 	current = &elem1;
// 	while (current)
// 	{
// 		printf("%s -> ", (char *)current->data);
// 		current = current->next;
// 	}
// 	current = &elem1;
// 	ft_sorted_list_merge(&current, &elem4, &ft_strcmp);
// 	printf("\n");
// 	while (current)
// 	{
// 		printf("%s -> ", (char *)current->data);
// 		current = current->next;
// 	}
// }
