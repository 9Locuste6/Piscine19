/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:33:41 by gorban            #+#    #+#             */
/*   Updated: 2019/07/22 14:18:46 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	char	*copy;
	int		x;
	int		size;

	size = 0;
	while (src[size])
		size++;
	size++;
	x = 0;
	if (!(copy = malloc(sizeof(*src) * size)))
		return (0);
	while (src[x])
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}

int					ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(*av);
		tab[i].str = *av;
		tab[i].copy = ft_strdup(*av);
		av++;
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
