/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:32:56 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/16 15:57:58 by tchevrie         ###   ########.fr       */
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

// static void	free_elem(void *elem)
// {
// 	size_t	size;
// 	size_t	i;

// 	size = sizeof(*elem);
// 	i = 0;
// 	while (i < size)
// 	{
// 		*(unsigned char *)(elem + i) = 0;
// 		i++;
// 	}
// }

void	ft_list_remove_if(t_list **b, void *d, int (*cmp)(), void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!b || !(*b) || !d || !cmp || !f)
		return ;
	current = *b;
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

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	**begin;
// 	char	s1[] = "Titouan";
// 	char	s2[] = "TiToUaN";
// 	char	s3[] = "Nauotit";

// 	elem1 = malloc(sizeof(t_list));
// 	elem2 = malloc(sizeof(t_list));
// 	elem3 = malloc(sizeof(t_list));
// 	if (!elem1 || !elem2 || !elem3)
// 		return (1);
// 	elem1->data = s1;
// 	elem1->next = elem2;
// 	elem2->data = s2;
// 	elem2->next = elem3;
// 	elem3->data = s3;
// 	elem3->next = 0;
// 	begin = &elem1;
// 	ft_list_remove_if(begin, "TiToUaN", &ft_strcmp, &free_elem);
// 	printf("%s\n", (char *) elem1->data);
// 	printf("%s\n", (char *) elem2->data);
// 	printf("%s\n", (char *) elem3->data);
// }
