/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:03:28 by gorban            #+#    #+#             */
/*   Updated: 2019/07/04 23:46:49 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printwrite(char nbr)
{
	write(1, &nbr, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		printwrite('-');
		nbr = nbr * (-1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	printwrite((nbr % 10) + 48);
}
