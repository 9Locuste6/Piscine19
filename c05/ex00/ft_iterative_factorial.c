/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:28:59 by gorban            #+#    #+#             */
/*   Updated: 2019/07/14 23:40:13 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int valeur;

	if (nb < 0)
		return (0);
	valeur = 1;
	while (nb > 0)
	{
		valeur = valeur * nb--;
	}
	return (valeur);
}
