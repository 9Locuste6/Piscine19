/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:16:41 by gorban            #+#    #+#             */
/*   Updated: 2019/07/24 13:02:04 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	ft_split(long nbr, char *base, int size, char *chain)
{
	if (nbr >= size)
		ft_split((nbr / size), base, size, chain);
	while (*chain)
		chain++;
	*chain = base[nbr % size];
	chain++;
	*chain = '\0';
}

int		ft_strlen_chain(long nbr, char *base, int size, int x)
{
	if (nbr >= size)
		x = ft_strlen_chain((nbr / size), base, size, x);
	return (x + 1);
}

char	*ft_putnbr_base(int nbr, char *base, char *chain)
{
	int		size;
	long	nb;
	int		len;
	int		signe;

	signe = 0;
	nb = nbr;
	size = ft_strlen(base);
	if (nb < 0)
	{
		signe = 1;
		nb = -nb;
	}
	len = ft_strlen_chain(nbr, base, size, 0);
	if (!(chain = malloc(sizeof(char) * (len + signe + 1))))
		return (0);
	*chain = signe * 45;
	chain++;
	*chain = '\0';
	chain--;
	ft_split(nb, base, size, chain);
	return (chain);
}
