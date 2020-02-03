/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 22:38:23 by gorban            #+#    #+#             */
/*   Updated: 2019/07/09 00:54:40 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest2;
	char			*src2;

	dest2 = dest;
	src2 = src;
	while (*src2 && n > 0)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		n--;
	}
	while (n > 0)
	{
		*dest2 = '\0';
		dest2++;
		n--;
	}
	return (dest);
}
