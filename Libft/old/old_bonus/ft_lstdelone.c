/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:03:34 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:39 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

// static void	test_del(void *elem, size_t size)
// {
// 	ft_putchar('o');
// }

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!del || !alst || !(*alst))
		return ;
	(*del)((*alst)->content, (*alst)->content_size);
	ft_memdel((void **) alst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*hello;

// 	hello = (void *) malloc(sizeof(t_list));
// 	if (!hello)
// 		return (0);
// 	hello->content = "Bonjour";
// 	hello->content_size = sizeof(char *);
// 	hello->next = hello;
// 	printf("Avant : %s | ", (unsigned char *) hello->content);
// 	printf("%lu | %p\n", hello->content_size, hello->content);
// 	ft_lstdelone(&hello, &test_del);
// 	printf("Apres : %s | ", (unsigned char *) hello->content);
// 	printf("%lu | %p\n", hello->content_size, hello->content);
// 	hello->content = "salut";
// }