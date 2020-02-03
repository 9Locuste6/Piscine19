/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:50:34 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 08:58:29 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;
	int	currentsort;

	i = 0;
	sort = 0;
	currentsort = 0;
	while (i < length - 1 && sort == 0)
	{
		sort = f(tab[i], tab[i + 1]);
		i++;
	}
	while (i < length - 1)
	{
		currentsort = f(tab[i], tab[i + 1]);
		if (sort > 0 && currentsort < 0)
			return (0);
		else if (sort < 0 && currentsort > 0)
			return (0);
		i++;
	}
	return (1);
}
