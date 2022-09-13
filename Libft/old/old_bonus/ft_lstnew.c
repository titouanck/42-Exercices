/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:32:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 15:25:24 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../old_includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (void *) malloc(content_size);
	if (!new)
		return (NULL);
	new->content = (void *) content;
	new->content_size = content_size;
	if (!new->content)
		new->content_size = 0;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*r;
// 	char	*test;

// 	test = "Bonjour";
// 	r = ft_lstnew((test), sizeof(test));
// 	printf("%s | %lu | %p\n", (char *) r->content, r->content_size, r->next);
// 	free(r);
// 	r = ft_lstnew(0, sizeof(int));
// 	printf("%s | %lu | %p\n", (char *) r->content, r->content_size, r->next);
// }
