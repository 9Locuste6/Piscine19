/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:35:19 by gorban            #+#    #+#             */
/*   Updated: 2019/07/20 09:02:25 by gorban           ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	x;

	x = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	if (size > 2147483647)
		return (-1);
	*range = ft_range(min, max);
	return (size);
}
