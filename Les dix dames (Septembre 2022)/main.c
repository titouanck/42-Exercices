/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:55:22 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/26 16:17:29 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("\nNombre de solutions : %d\n", ft_ten_queens_puzzle());
}
