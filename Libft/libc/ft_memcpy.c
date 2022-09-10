/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:00:16 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 16:12:17 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	void	*r;

	r = malloc(sizeof(unsigned char) * (ft_strlen(dst) + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(r + i) = *(unsigned char *)(dst + i);
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[] = "......................";
// 	char	src1[] = "Bien le bonjour.";

// 	printf("ft_memcpy :\n");
// 	printf("r : %s\n", (unsigned char *)ft_memcpy(dst1, src1, ft_strlen(src1)));
// 	printf("dst : %s\n", dst1);
// 	printf("src : %s\n\n", src1);

// 	char	dst2[] = "......................";
// 	char	src2[] = "Bien le bonjour.";

// 	printf("memcpy :\n");
// 	printf("r : %s\n", (unsigned char *)memcpy(dst2, src2, ft_strlen(src2)));
// 	printf("dst : %s\n", dst2);
// 	printf("src : %s\n", src2);
// }