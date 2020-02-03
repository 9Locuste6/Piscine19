/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:16:49 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 21:46:04 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	*ft_find_op(char c)
{
	char	op[5];
	void	(*f[5])(int, int);
	int		i;

	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	f[0] = &ft_addition;
	f[1] = &ft_soustraction;
	f[2] = &ft_multi;
	f[3] = &ft_divi;
	f[4] = &ft_modulo;
	i = -1;
	while (++i < 5)
		if (c == op[i])
			return (f[i]);
	return (0);
}

int		atoi(char *str)
{
	int	valeur;
	int signe;

	valeur = 0;
	signe = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (ft_is_nbr(*str))
	{
		valeur = valeur * 10 + (*str - '0');
		str++;
	}
	return (valeur * signe);
}

void	ft_putnbr(int nbr)
{
	long nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		main(int argc, char **argv)
{
	void	(*fct)(int, int);

	if (argc != 4)
	{
		return (0);
	}
	if (ft_strlen(argv[2]) != 1 || ft_is_op(argv[2]) == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	fct = ft_find_op(argv[2][0]);
	fct(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
