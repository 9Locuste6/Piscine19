/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:46:40 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 08:54:18 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (++i < length)
		if (f(tab[i]))
			count++;
	return (count);
}