/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 18:46:48 by gorban            #+#    #+#             */
/*   Updated: 2019/07/08 19:14:00 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	splithexa(int nbr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (nbr > 15)
		splithexa(nbr / 16);
	ft_putchar(hex[nbr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	char *str2;

	str2 = str;
	while (*str2)
	{
		if (*str2 >= 32 && *str2 <= 126)
			ft_putchar(*str2);
		else
		{
			ft_putchar('\\');
			if (*str2 <= 15)
				ft_putchar('0');
			splithexa(*str2);
		}
		str2++;
	}
}
