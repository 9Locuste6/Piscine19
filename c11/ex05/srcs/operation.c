/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:30:08 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 17:57:37 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	ft_addition(int c1, int c2)
{
	ft_putnbr(c1 + c2);
	ft_putchar('\n');
}

void	ft_soustraction(int c1, int c2)
{
	ft_putnbr(c1 - c2);
	ft_putchar('\n');
}

void	ft_multi(int c1, int c2)
{
	ft_putnbr(c1 * c2);
	ft_putchar('\n');
}

void	ft_divi(int c1, int c2)
{
	if (c2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	ft_putnbr(c1 / c2);
	ft_putchar('\n');
	return ;
}

void	ft_modulo(int c1, int c2)
{
	if (c2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_putnbr(c1 % c2);
	ft_putchar('\n');
}
