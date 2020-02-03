/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:41:02 by gorban            #+#    #+#             */
/*   Updated: 2019/07/17 14:04:28 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher_un_tableau(int grille[10][10], int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (grille[j][i] == 1)
			{
				j += 48;
				write(1, &j, 1);
				j -= 48;
			}
			j++;
		}
		i++;
	}
}

int		check_line(int grid[10][10], int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < 8)
	{
		j = i + 1;
		while (j < 10)
		{
			if (grid[i][x] == grid[j][x] && grid[i][x] != 0)
				return (1);
			if (grid[y][i] == grid[y][j] && grid[y][i] != 0)
				return (1);
			j++;
		}
	}
	return (0);
}

int		check_diag(int grid[10][10], int x, int y, int d)
{
	int a;
	int b;
	int c;

	a = x - y;
	b = y - x;
	c = (x + y);
	if (c > 9)
	{
		d = c - 9;
		c = 9;
	}
	while (c > y)
		if (grid[c--][d++] == 1)
			return (1);
	if (x > y)
		b = 0;
	else
		a = 0;
	while (b < y)
		if (grid[b++][a++] == 1)
			return (1);
	return (0);
}

int		ft_solver(int x, int grid[10][10], int solution)
{
	int y;

	y = 0;
	while (y <= 9)
	{
		grid[y][x] = 1;
		if (check_line(grid, x, y) == 0 && check_diag(grid, x, y, 0) == 0)
		{
			if (x == 9)
			{
				afficher_un_tableau(grid, 10);
				write(1, "\n", 1);
				grid[y][x] = 0;
				return (solution + 1);
			}
			else
				solution = ft_solver(x + 1, grid, solution);
		}
		grid[y][x] = 0;
		y++;
	}
	return (solution);
}

int		ft_ten_queens_puzzle(void)
{
	int grid[10][10];
	int x;
	int y;
	int solution;

	y = 0;
	solution = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			grid[y][x] = 0;
			x++;
		}
		y++;
	}
	solution = ft_solver(0, grid, solution);
	return (solution);
}
