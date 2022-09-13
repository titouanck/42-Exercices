/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:06:06 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/13 12:09:20 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

// int	main(void)
// {
// 	ft_putstr("Success\n");
// }
