/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:11:55 by gorban            #+#    #+#             */
/*   Updated: 2019/07/07 22:19:26 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int x;
	int y;

	x = 0;
	y = size - 1;
	while (x <= size / 2)
	{
		temp = tab[x];
		tab[x] = tab[y];
		tab[y] = temp;
		x++;
		y--;
	}
}
