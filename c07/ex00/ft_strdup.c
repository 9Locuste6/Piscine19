/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 00:35:19 by gorban            #+#    #+#             */
/*   Updated: 2019/07/20 08:39:12 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
