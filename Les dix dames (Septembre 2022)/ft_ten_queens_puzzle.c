/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:36:48 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/26 16:14:42 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

/* On affiche chaque solution */
void	print_solutions(const char chessboard[10][10])
{
	size_t	i;
	size_t	j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (chessboard[i][j] == 'Q')
			{
				c = j + '0';
				write (1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

/* On regarde si on peut poser la dame à l'emplacement demandé, 
d'abord en verifiant la ligne, puis les diagonales */
static int	check_map(char chessboard[10][10], int column, int row)
{
	int	i;

	i = 0;
	while (i < column)
	{
		if (chessboard[i][row] == 'Q')
			return (0);
		i++;
	}
	i = 1;
	while (i < 10)
	{
		if ((column - i) >= 0 && (row - i) >= 0)
		{
			if (chessboard[column - i][row - i] == 'Q')
				return (0);
		}
		if (column - i >= 0 && row + i < 10)
		{
			if (chessboard[column - i][row + i] == 'Q')
				return (0);
		}
		i++;
	}
	return (1);
}

/* On identifie la place de la dame dans la colonne */
static int	find_row(char column[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (column[i] == 'Q')
			return (i);
		i++;
	}
	return (-42);
}

/* On tente de placer la dame a un emplacement donné */
static int	put_queen(char chessboard[10][10], int column, int row)
{
	if (column < 0)
		return (0);
	else if (column > 9)
		return (1);
	if (find_row(chessboard[column]) != -42)
		chessboard[column][find_row(chessboard[column])] = 'X';
	if (row > 9)
	{
		column = column - 1;
		row = find_row(chessboard[column]);
		return (put_queen(chessboard, column, row + 1));
	}
	else if (check_map(chessboard, column, row))
	{
		chessboard[column][row] = 'Q';
		return (put_queen(chessboard, column + 1, 0));
	}
	else
		return (put_queen(chessboard, column, row + 1));
}

int	ft_ten_queens_puzzle(void)
{
	char	chessboard[10][10];
	int		column;
	int		row;
	int		count;

	column = 0;
	while (column < 10)
	{
		row = 0;
		while (row < 10)
			chessboard[column][row++] = 'X';
		column++;
	}
	column = 0;
	row = 0;
	count = 0;
	while (put_queen(chessboard, column, row))
	{
		print_solutions(chessboard);
		column = 9;
		row = find_row(chessboard[column]) + 1;
		count++;
	}
	return (count);
}
