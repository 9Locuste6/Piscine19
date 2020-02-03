/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:55:06 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 09:36:19 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int total;

	i = 0;
	j = 0;
	total = 0;
	while (dest[i] && i < size)
		i++;
	total += i;
	while (src[j])
		j++;
	total += j;
	if (i == size)
		return (total);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (total);
}
