/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:43:11 by gorban            #+#    #+#             */
/*   Updated: 2019/07/24 13:02:50 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_putnbr_base(int nbr, char *base, char *chain);

int		ft_pos(char nbr, char *base)
{
	int x;

	x = 0;
	while (base[x])
	{
		if (nbr == base[x])
			return (x);
		x++;
	}
	return (-1);
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

int		ft_error(char *base)
{
	int		size;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-' ||
				(base[size] >= 9 && base[size] <= 13) || base[size] == 32)
			return (0);
		size++;
	}
	if (ft_verifbase(base) == 0 || size <= 1)
		return (0);
	return (1);
}

int		ft_findnbr(char *str, char *base)
{
	int valeur;
	int size;
	int pos;
	int x;

	x = 0;
	size = 0;
	while (base[size])
		size++;
	valeur = 0;
	while (str[x])
	{
		pos = ft_pos(str[x], base);
		if (pos >= 0)
			valeur = valeur * size + pos;
		else
			while (str[x + 1])
				x++;
		x++;
	}
	return (valeur);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		signe;
	int		valeur;
	char	*chain;

	chain = 0;
	signe = 1;
	if (ft_error(base_from) == 0 || ft_error(base_to) == 0)
		return (0);
	while (*nbr && (*nbr == ' ' || *nbr == '\t' || *nbr == '\n'
				|| *nbr == '\v' || *nbr == '\f' || *nbr == '\r'))
		nbr++;
	while (*nbr && (*nbr == '+' || *nbr == '-'))
	{
		if (*nbr == '-')
			signe *= -1;
		nbr++;
	}
	valeur = ft_findnbr(nbr, base_from);
	chain = ft_putnbr_base(valeur * signe, base_to, chain);
	return (chain);
}
