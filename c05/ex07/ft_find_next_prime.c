/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:16:03 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 11:04:49 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	div = 3;
	while (div < nb / div)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (!ft_is_prime(nb))
	{
		nb++;
		while (!ft_is_prime(nb))
			nb++;
	}
	return (nb);
}
