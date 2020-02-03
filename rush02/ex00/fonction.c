/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:51:30 by gorban            #+#    #+#             */
/*   Updated: 2019/07/21 16:30:09 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_atoi(const char *str)
{
	int		n;
	long	value;

	n = 0;
	value = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		value = value * 10 + (str[n] - '0');
		n++;
	}
	return (value);
}

long	ft_power(long nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		nb = nb * ft_power(nb, power - 1);
	return (nb);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		size++;
		str++;
	}
	return (size);
}

void	ft_putstr(char *str)
{
	while (*str != ':')
		str++;
	str++;
	while (*str == ' ')
		str++;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
