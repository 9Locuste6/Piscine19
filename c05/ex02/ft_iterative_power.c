/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:12:33 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 11:08:04 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	x = nb;
	while (power > 1)
	{
		nb *= x;
		power--;
	}
	return (nb);
}
