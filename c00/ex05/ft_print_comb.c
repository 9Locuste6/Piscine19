/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:35:08 by gorban            #+#    #+#             */
/*   Updated: 2019/07/05 00:18:28 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	printwrite(char a, char b, char c)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				printwrite(a, b, c);
				c++;
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}
