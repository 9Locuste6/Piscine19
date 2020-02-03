/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:07:59 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 02:11:38 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	check_left_row_view(int grid[6][6], int row)
{
	int	max_height;
	int i;
	int count;

	i = 0;
	max_height = 0;
	count = 0;
	while (i < 6)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_right_row_view(int grid[6][6], int row)
{
	int	max_height;
	int	i;
	int	count;

	i = 5;
	max_height = 0;
	count = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	check_down_col_view(int grid[6][6], int col)
{
	int		max_height;
	int		i;
	char	count;

	i = 5;
	max_height = 0;
	count = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			count++;
		}
		i--;
	}
	return (count);
}

int	check_up_col_view(int grid[6][6], int col)
{
	int			max_height;
	int			i;
	char		count;

	i = 0;
	max_height = 0;
	count = 0;
	while (i < 6)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_used(int grid[6][6], int row, int col, int n)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < n - 2)
	{
		j = i + 1;
		while (j < n)
		{
			if (grid[i][col] == grid[j][col] && grid[i][col] != 0)
				return (0);
			if (grid[row][i] == grid[row][j] && grid[row][i] != 0)
				return (0);
			j++;
		}
	}
	return (1);
}
