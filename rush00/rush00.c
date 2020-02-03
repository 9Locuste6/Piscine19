/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frustration.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 08:33:56 by gorban            #+#    #+#             */
/*   Updated: 2019/07/06 08:57:42 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int l, int h)
{
	int x;
	int y;

	x = 0;
	y = 0;
	l = l - 1;
	h = h - 1;
	while (y <= h)
	{
		while (x <= l)
		{
			if ((x == l || x == 0) && (y == h || y == 0))
			{
				ft_putchar('o');
			}
			else if (x == l || x == 0)
			{
				ft_putchar('|');
			}
			else if (y == h || y == 0)
			{
				ft_putchar('-');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 0;
		ft_putchar(10);
	}
}

int	main()
{
	rush(8, 3);
}
