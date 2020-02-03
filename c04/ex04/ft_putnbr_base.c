/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 00:08:05 by gorban            #+#    #+#             */
/*   Updated: 2019/07/11 00:12:14 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_alphanumeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			if (*str < 'a' || *str > 'z')
				if (*str < 'A' || *str > 'Z')
					return (0);
		str++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	ft_split(long nbr, char *base, int size)
{
	if (nbr >= size)
	{
		ft_split((nbr / size), base, size);
	}
	write(1, &base[nbr % size], 1);
}

int		ft_verifbase(char *base)
{
	int x;
	int y;

	x = 0;
	while (base[x])
	{
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	nb;

	nb = nbr;
	size = ft_strlen(base);
	if (ft_verifbase(base) == 0 || size <= 1 || ft_is_alphanumeric(base) == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_split(nb, base, size);
}
