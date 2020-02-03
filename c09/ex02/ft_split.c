/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:34:26 by gorban            #+#    #+#             */
/*   Updated: 2019/07/23 16:13:55 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_in_base(char nbr, char *base)
{
	int	x;

	x = 0;
	while (base[x])
	{
		if (nbr == base[x])
			return (1);
		x++;
	}
	return (0);
}

int		ft_strlen(char *str, char *charset)
{
	int a;
	int x;
	int size;

	a = 0;
	x = 0;
	size = 0;
	while (str[a])
	{
		if (ft_is_in_base(str[a], charset) || !(str[a + 1]))
		{
			if (!(str[a + 1]) && !(ft_is_in_base(str[a], charset)))
				x++;
			if (x > 0)
				size++;
			x = 0;
		}
		else
			x++;
		a++;
	}
	return (size);
}

char	*ft_complet_tab(char *str, int min, int max)
{
	char	*tab;
	int		size;
	int		x;

	x = 0;
	size = max - min;
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (min < max)
	{
		tab[x] = str[min];
		min++;
		x++;
	}
	tab[x] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		x;
	int		size;
	char	**tab;
	int		a;
	int		t;

	size = ft_strlen(str, charset);
	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (0);
	a = -1;
	x = 0;
	t = 0;
	while (str[++a])
		if (ft_is_in_base(str[a], charset) || !(str[a + 1]))
		{
			if (!(str[a + 1]) && !(ft_is_in_base(str[a], charset)))
				tab[t++] = ft_complet_tab(str, a - x, a + 1);
			else if (x > 0)
				tab[t++] = ft_complet_tab(str, a - x, a);
			x = 0;
		}
		else
			x++;
	tab[t] = 0;
	return (tab);
}
