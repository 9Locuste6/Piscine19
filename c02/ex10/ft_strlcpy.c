/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:25:44 by gorban            #+#    #+#             */
/*   Updated: 2019/07/09 14:59:55 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	sizesrc;

	x = 0;
	sizesrc = 0;
	while (src[sizesrc] != '\0')
		sizesrc++;
	if (size == 0 || size > sizesrc)
		return (sizesrc);
	while (x < size && *src)
	{
		dest[x] = *src;
		src++;
		x++;
	}
	dest[--x] = '\0';
	return (sizesrc);
}
