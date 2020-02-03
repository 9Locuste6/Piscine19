/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 21:26:59 by gorban            #+#    #+#             */
/*   Updated: 2019/07/10 21:46:43 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	return (0);
}

int	ft_is_signe(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		x;
	int		signe;
	int		valeur;

	signe = 1;
	valeur = 0;
	x = 0;
	while (str[x] && ft_is_space(str[x]))
		x++;
	while (str[x] && ft_is_signe(str[x]))
	{
		if (str[x] == '-')
			signe *= -1;
		x++;
	}
	while (str[x] && ft_is_numeric(str[x]))
	{
		valeur = valeur * 10 + (str[x] - '0');
		x++;
	}
	return (valeur * signe);
}
