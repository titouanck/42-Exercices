/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:32:56 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:39:31 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	free_elem(void *elem)
{
	size_t	size;
	size_t	i;

	size = sizeof(*elem);
	i = 0;
	while (i < size)
	{
		*(unsigned char *)(elem + i) = 0;
		i++;
	}
}

void	ft_list_remove_if(t_list **b, void *d, int (*cmp)(), void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	current = b;
	while (current)
	{
		next = current->next;
		if (cmp(current->data, d) == 0)
		{
			f(current->data);
			free(current);
		}
		current = next;
	}
}
