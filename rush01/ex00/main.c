/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:43:58 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 09:40:21 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"

int	ft_solve(int col, int row, int grid[6][6], int index[4][6], int n)
{
	int solved;
	int box;

	box = 1;
	solved = 0;
	while (box <= n && solved == 0)
	{
		grid[row][col] = box;
		if (check_used(grid, row, col, n) == 1)
		{
			solved = ft_condition(col, row, grid, index, n);
		}
		box++;
	}
	if (solved == 1)
		return (1);
	else
		grid[row][col] = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	int index[4][6];
	int	solved;
	int len;
	int grid[6][6];

	len = ft_strlen(argv[1]);
	if (ft_error(len, argv[1]) == 0 || argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_split(argv[1], index);
	cree_un_tableau(grid, len / 4);
	solved = ft_solve(0, 0, grid, index, len / 4);
	if (solved == 1)
		afficher_un_tableau(grid, len / 4);
	else
		write(1, "Error", 5);
	return (0);
}

int	ft_condition(int col, int row, int grid[6][6], int index[4][6], int n)
{
	int solved;

	solved = 0;
	if (col < n - 1 && row < n - 1)
	{
		if (ft_in_condition(col, row, grid, index, 0) == 1)
			solved = ft_solve(col + 1, row, grid, index, n);
	}
	else if (col == n - 1 && row < n - 1)
	{
		if (ft_in_condition(col, row, grid, index, 1) == 1)
			solved = ft_solve(0, row + 1, grid, index, n);
	}
	else if (col < n - 1 && row == n - 1)
	{
		if (ft_in_condition(col, row, grid, index, 2) == 1)
			solved = ft_solve(col + 1, row, grid, index, n);
	}
	else if (col == n - 1 && row == n - 1)
		if (ft_in_condition(col, row, grid, index, 3) == 1)
			solved = 1;
	return (solved);
}

int	ft_in_condition(int col, int row, int grid[6][6], int index[4][6], int type)
{
	if (type == 0)
		if (check_up_col_view(grid, col) <= index[0][col]
				&& check_left_row_view(grid, row) <= index[2][row])
			return (1);
	if (type == 1)
		if (check_up_col_view(grid, col) <= index[0][col]
				&& check_left_row_view(grid, row) == index[2][row]
				&& check_right_row_view(grid, row) == index[3][row])
			return (1);
	if (type == 2)
		if (check_up_col_view(grid, col) == index[0][col]
				&& check_down_col_view(grid, col) == index[1][col]
				&& check_left_row_view(grid, row) <= index[2][row])
			return (1);
	if (type == 3)
		if (check_up_col_view(grid, col) == index[0][col]
				&& check_down_col_view(grid, col) == index[1][col]
				&& check_left_row_view(grid, row) == index[2][row]
				&& check_right_row_view(grid, row) == index[3][row])
			return (1);
	return (0);
}
