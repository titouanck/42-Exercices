/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:27:07 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 13:11:18 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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
// 	elem3.next = &elem4;
// 	elem4.next = &elem5;
// 	elem5.next = 0;
// 	current = &elem1;
// 	while (current)
// 	{
// 		printf("%s -> ", (char *)current->data);
// 		current = current->next;
// 	}
// 	current = &elem1;
// 	ft_list_sort(&current, &ft_strcmp);
// 	printf("\n");
// 	while (current)
// 	{
// 		printf("%s -> ", (char *)current->data);
// 		current = current->next;
// 	}
// }
