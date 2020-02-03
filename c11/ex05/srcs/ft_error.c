/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:42:53 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 01:06:03 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		ft_is_nbr(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int		ft_is_op(char *signe)
{
	if (*signe == '+')
		return (1);
	else if (*signe == '-')
		return (2);
	else if (*signe == '*')
		return (3);
	else if (*signe == '/')
		return (4);
	else if (*signe == '%')
		return (5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
