/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:49:23 by gorban            #+#    #+#             */
/*   Updated: 2019/07/24 16:27:36 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;

	x = 0;
	while (dest[x])
		x++;
	while (*src)
	{
		dest[x++] = *src;
		src++;
	}
	dest[x] = '\0';
	return (dest);
}

int		ft_strstrlen(char **str, int size)
{
	int	x;
	int	y;
	int	lenstrs;

	x = -1;
	lenstrs = 0;
	while (++x < size)
	{
		y = -1;
		while (str[x][++y])
			lenstrs++;
	}
	return (lenstrs);
}

int		ft_lensep(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		lenstrs;
	int		lensep;
	char	*tab;

	lenstrs = ft_strstrlen(strs, size);
	lensep = ft_lensep(sep);
	if (size == 0)
	{
		if (!(tab = malloc(sizeof(char) * 1)))
			return (0);
		*tab = 0;
		return (tab);
	}
	if (!(tab = malloc(sizeof(char) * (lenstrs + ((size - 1) * lensep)) + 1)))
		return (0);
	tab[0] = '\0';
	x = -1;
	while (++x < size)
	{
		ft_strcat(tab, strs[x]);
		if (x < size - 1)
			ft_strcat(tab, sep);
	}
	return (tab);
}
