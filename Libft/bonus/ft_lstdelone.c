/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:03:34 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 14:48:25 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// static void	test_del(void *elem);

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && (*del))
	{
		(*del)(lst->content);
		free(lst);
		lst = NULL;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*hello;

// 	hello = (void *) malloc(sizeof(t_list));
// 	if (!hello)
// 		return (0);
// 	hello->content = "Bonjour";
// 	hello->next = hello;
// 	printf("Avant : %s | ", (unsigned char *) hello->content);
// 	printf("%p\n", hello->content);
// 	ft_lstdelone(hello, &test_del);
// 	hello->content = "salut";
// 	printf("Apres : %s | ", (unsigned char *) hello->content);
// 	printf("%p\n", hello->content);
// }

// static void	test_del(void *elem)
// {
// 	printf("TEST : %p\n", elem);
// }
