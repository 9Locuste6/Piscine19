/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 00:48:45 by gorban            #+#    #+#             */
/*   Updated: 2019/07/06 01:01:28 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < size)
	{
		while (y < size - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				temp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = temp;
			}
			y++;
		}
		x++;
		y = 0;
	}
}
