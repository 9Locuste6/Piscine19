/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:01:45 by gorban            #+#    #+#             */
/*   Updated: 2019/07/12 15:06:01 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest2;

	dest2 = dest;
	while (*dest2)
		dest2++;
	while (*src && nb > 0)
	{
		*dest2 = *src;
		src++;
		dest2++;
		nb--;
	}
	*dest2 = '\0';
	return (dest);
}
