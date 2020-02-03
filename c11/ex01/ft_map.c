/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:30:29 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 08:53:43 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	res = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
