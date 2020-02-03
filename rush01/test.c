/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:41:01 by gorban            #+#    #+#             */
/*   Updated: 2019/07/14 19:49:51 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void  ft_putchar(char c)
{
	write( 1, &c, 1);
}

void    AfficherUnTableau(int grille[4][4], int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while(j < n)
		{
			ft_putchar(grille[i][j] + 48);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

int    check_left_row_view(int grid[4][4], int row)
{
	int        max_height;
	int        i;
	int        count;

	i = 0;
	max_height = 0;
	count = 0;
	while (i < 4)
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

int    check_right_row_view(int grid[4][4], int row)
{
	int        max_height;
	int        i;
	int        count;

	i = 3;
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

int    check_down_col_view(int grid[4][4], int col)
{
	int        max_height;
	int        i;
	char    count;

	i = 3;
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

int        check_up_col_view(int grid[4][4], int col)
{
	int     max_height;
	int     i;
	char    count;

	i = 0;
	max_height = 0;
	count = 0;
	while (i < 4)
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

int check_used(int grid[4][4], int row, int col, int N)
{
	int     i;
	int     j;

	i = -1;
	while (i++ < N - 2)
	{
		j = i + 1;
		while (j < N)
		{
			if (grid[i][col] == grid[j][col] && grid[i][col] != 0)
			{
				return (0);
			}
			j++;
		}
	}
	i = -1;
	while (i++ < N - 2)
	{
		j = i + 1;
		while (j < N)
		{
			if (grid[row][i] == grid[row][j] && grid[row][i] != 0)
			{
				return (0);
			}
			j++;
		}
	}	return (1);
}

int ft_solve(int box, int col, int row, int grid[4][4], int index[4][4], int n)
{
	int solved;

	solved = 0;
	while (box <= n && solved == 0)
	{
		grid[row][col] = box;
		if (check_used(grid, row, col, n) == 1)
		{
			AfficherUnTableau(grid, n);
			ft_putchar(10);
			if (col < n - 1 && row < n - 1)
			{
				if (check_up_col_view(grid, col) <= index[0][col] && check_left_row_view(grid, row) <= index[2][row])
				{
					solved = ft_solve(1, col + 1, row, grid, index, n);
				}
			}
			else if (col == n - 1 && row < n - 1)
			{	
				if (check_up_col_view(grid, col) <= index[0][col] && check_left_row_view(grid, row) == index[2][row] && check_right_row_view(grid, row) == index[3][row])
				{
					solved = ft_solve(1, 0, row + 1, grid, index, n);	
				}
			}
			else if (col < n - 1 && row == n - 1)
			{
				if (check_up_col_view(grid, col) == index[0][col] && check_down_col_view(grid, col) == index[1][col] && check_left_row_view(grid, row) <= index[2][row])
					solved = ft_solve(1, col + 1, row, grid, index, n);
			}
			else if (col == n - 1 && row == n - 1)
			{
				if (check_up_col_view(grid, col) == index[0][col] && check_down_col_view(grid, col) == index[1][col] && check_left_row_view(grid, row) == index[2][row] && check_right_row_view(grid, row) == index[3][row])
					return (1);
			}	
		}
		box++;
	}
	if (solved == 1)
		return (1);
	else
		grid[row][col] = 0;
	return (0);
}

int main()
{
	int grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int index[4][4] = {{1, 2, 3, 2}, {2, 3, 2, 1}, {1, 2, 3, 2}, {2, 3, 2, 1}};
	int x = ft_solve(1, 0, 0, grid, index, 4);
	printf("%d", x);
	return 0;
}
