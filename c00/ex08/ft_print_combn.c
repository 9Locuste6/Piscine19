/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:48:59 by gorban            #+#    #+#             */
/*   Updated: 2019/07/16 18:04:26 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_order(char *str)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (str[x + 1])
	{
		y = x + 1;
		while (str[y])
		{
			if (str[x] <= str[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putstring(char *str, int n, int *truc)
{
	if (ft_is_order(str))
	{
		if (*truc != 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		*truc = 1;
		while (n-- > 0)
			ft_putchar(str[n]);
	}
}

void	ft_print_combn(int n)
{
	char	compteur[n + 1];
	int		x;
	int		*truc;
	int		truk;

	truk = 0;
	truc = &truk;
	x = -1;
	while (x++ < n - 1)
		compteur[x] = '0';
	compteur[x--] = 0;
	while (compteur[x] && n > 0 && n < 10)
	{
		x = 0;
		while (compteur[x] <= '9')
		{
			ft_putstring(compteur, n, truc);
			compteur[x]++;
		}
		x--;
		while (compteur[++x] >= '9')
			compteur[x] = n - 1 - x + '0';
		if (compteur[x])
			compteur[x]++;
	}
}
