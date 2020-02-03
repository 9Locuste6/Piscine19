/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 07:55:09 by gorban            #+#    #+#             */
/*   Updated: 2019/07/20 08:40:05 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	x;

	x = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	if (!(tab = malloc(sizeof(*tab) * size)))
		return (0);
	while (x < size)
	{
		tab[x] = min;
		x++;
		min++;
	}
	return (tab);
}
