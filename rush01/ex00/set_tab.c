/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:49:00 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 01:15:28 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "include.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		if (*str >= '1' && *str <= '9')
			n++;
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (n);
}

int		ft_error(int n, char *str)
{
	if (n != 24)
	{
		return (0);
	}
	while (*str)
	{
		if ((*str < '1' || *str > '6') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}

void	cree_un_tableau(int grid[6][6], int len)
{
	int a;
	int b;

	a = 0;
	while (a < len)
	{
		b = 0;
		while (b < len)
		{
			grid[a][b] = 0;
			b++;
		}
		a++;
	}
}

void	afficher_un_tableau(int grille[6][6], int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(grille[i][j] + 48);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
