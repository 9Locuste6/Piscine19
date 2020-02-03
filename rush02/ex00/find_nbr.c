/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:55:06 by gorban            #+#    #+#             */
/*   Updated: 2019/07/21 18:24:52 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include <unistd.h>

void	ft_write_nbr2(int index, long div, char **dict)
{
	int t;

	t = 0;
	if (div == 100)
	{
		while (index != ft_atoi(dict[t]) && dict[t])
			t++;
		ft_putstr(dict[t]);
		ft_putchar(' ');
		t = 0;
		while (div != ft_atoi(dict[t]) && dict[t])
			t++;
		ft_putstr(dict[t]);
	}
	else if (div >= 0)
	{
		while (div != ft_atoi(dict[t]) && dict[t])
			t++;
		ft_putstr(dict[t]);
	}
}

void	ft_write_nbr(long div, char **dict, int sizedict)
{
	int t;

	t = -1;
	while (div != ft_atoi(dict[++t]) && (sizedict - 1) >= 0)
	{
		sizedict--;
		if (sizedict == 0)
		{
			write(2, "Error", 5);
			return ;
		}
	}
	ft_putstr(dict[t]);
}

void	find_nbr2(long nb, long div, char **dict)
{
	int index;

	while (div > 0)
	{
		index = nb / div;
		if (index > 0)
		{
			ft_write_nbr2(index, div, dict);
			if (nb % div > 0)
				ft_putchar(' ');
		}
		nb = nb % div;
		if (div > 20)
			div -= 10;
		else
			div -= 1;
	}
}

void	find_nbr(char *nbr, int size, char **dict, int sizedict)
{
	long	div;
	long	nb;

	nb = ft_atoi(nbr);
	if (nb == 0)
		ft_write_nbr2(1, 0, dict);
	while (size % 3)
		size -= 1;
	div = ft_power(10, size);
	while (div > 0)
	{
		find_nbr2(nb / div, 100, dict);
		if (nb / div > 0 && div >= 1000)
		{
			ft_putchar(' ');
			ft_write_nbr(div, dict, sizedict);
			if (nb % div > 0)
				ft_putchar(' ');
		}
		nb = nb % div;
		div = div / 1000;
	}
	ft_putchar('\n');
}
