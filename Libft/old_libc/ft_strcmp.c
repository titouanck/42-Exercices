/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:57:13 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/11 00:10:59 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*s4;
// 	char	*s5;
// 	char	*s6;

// 	s1 = "Bonjour";
// 	s2 = "bonjour";
// 	s3 = "Bonjjur";
// 	s4 = "Bonjour.";
// 	s5 = "";
// 	s6 = "oui";
// 	printf("%d : %d\n", strcmp(s1, s1), ft_strcmp(s1, s1));
// 	printf("%d : %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
// 	printf("%d : %d\n", strcmp(s1, s3), ft_strcmp(s1, s3));
// 	printf("%d : %d\n", strcmp(s1, s4), ft_strcmp(s1, s4));
// 	printf("%d : %d\n", strcmp(s1, s5), ft_strcmp(s1, s5));
// 	printf("%d : %d\n", strcmp(s1, s6), ft_strcmp(s1, s6));
// }
