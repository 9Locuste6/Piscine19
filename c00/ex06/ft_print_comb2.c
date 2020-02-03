/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:13:18 by gorban            #+#    #+#             */
/*   Updated: 2019/07/04 23:37:03 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	printwrite(char nbr1)
{
	write(1, &nbr1, 1);
}

void	tri(int nbr)
{
	int nbr1;
	int nbr2;

	nbr1 = nbr / 10;
	nbr2 = nbr % 10;
	if (nbr > 9)
	{
		printwrite(nbr1 + 48);
		printwrite(nbr2 + 48);
	}
	else
	{
		printwrite('0');
		printwrite(nbr + 48);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			tri(a);
			printwrite(' ');
			tri(b);
			if (a < 98 || b < 99)
			{
				printwrite(',');
				printwrite(' ');
			}
			b++;
		}
		a++;
	}
}
