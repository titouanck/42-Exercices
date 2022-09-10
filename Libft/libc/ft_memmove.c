/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:59:52 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/09 16:31:39 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;
	void	*r;
	size_t	i;

	buf = malloc(sizeof(unsigned char) * (len + 1));
	r = malloc(sizeof(unsigned char) * (ft_strlen(dst) + 1));
	if (!buf || !r)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(buf + i) = *(unsigned char *)(src + i);
		*(unsigned char *)(r + i) = *(unsigned char *)(dst + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(buf + i);
		i++;
	}
	free (buf);
	return (r);
}

// #include <stdio.h>

// int	main(void)
// {
	// char	dst1[] = "......................";
	// char	src1[] = "Bien le bonjour.";

	// printf("ft_memmove :\n");
	// printf("%s\n", (unsigned char *)ft_memmove(dst1, src1, ft_strlen(src1)));
	// printf("dst : %s\n", dst1);
	// printf("src : %s\n\n", src1);

	// char	dst2[] = "......................";
	// char	src2[] = "Bien le bonjour.";

	// printf("memmove :\n");
	// printf("%s\n", (unsigned char *)memmove(dst2, src2, ft_strlen(src2)));
	// printf("dst : %s\n", dst2);
	// printf("src : %s\n", src2);
//	}

	/* Probleme sur le retour de la fonction memmove ?!
	Elle devrait renvoyer la valeure originale de dst, pas la valeure modifiée. */