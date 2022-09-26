/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:21:21 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:00 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
// static void	ft_toupper_str(void *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*(char *)(str + i))
// 	{
// 		if (*(char *)(str + i) >= 'a' && 'z' >= *(char *)(str + i))
// 			*(char *)(str + i) = *(char *)(str + i) - 'a' + 'A';
// 		i++;
// 	}
// }

// static int	ft_strcmp(char *s1, char *s2)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s1[i] && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

void	ft_list_foreach_if(t_list *b, void (*f)(void *), void *d, int (*cmp)())
{
	t_list	*current;

	current = b;
	while (current)
	{
		if (cmp(current->data, d) == 0)
			f(current->data);
		current = current->next;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	elem1;
// 	t_list	elem2;
// 	t_list	elem3;
// 	char	s1[] = "Titouan";
// 	char	s2[] = "TiToUaN";
// 	char	s3[] = "Nauotit";

// 	elem1.data = s1;
// 	elem1.next = &elem2;
// 	elem2.data = s2;
// 	elem2.next = &elem3;
// 	elem3.data = s3;
// 	elem3.next = 0;
// 	ft_list_foreach_if(&elem1, &ft_toupper_str, "TiToUaN", &ft_strcmp);
// 	printf("%s\n", (char *) elem1.data);
// 	printf("%s\n", (char *) elem2.data);
// 	printf("%s\n", (char *) elem3.data);
// }
