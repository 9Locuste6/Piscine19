/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:48:23 by gorban            #+#    #+#             */
/*   Updated: 2019/07/13 20:51:26 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_pos(char nbr, char *base)
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

int	ft_verifbase(char *base)
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

int	ft_error(char *base)
{
	int		size;

	size = 0;
	while (base[size])
	{
		if (base[size] < '0' || base[size] > '9')
			if (base[size] < 'a' || base[size] > 'z')
				if (base[size] < 'A' || base[size] > 'Z')
					return (0);
		size++;
	}
	if (ft_verifbase(base) == 0 || size <= 1)
		return (0);
	return (1);
}

int	ft_findnbr(char *str, char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	valeur;

	signe = 1;
	if (ft_error(base) == 0)
		return (0);
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
				|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	valeur = ft_findnbr(str, base);
	return (valeur * signe);
}
