/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitIndex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:32:51 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 02:12:50 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "include.h"

void	ft_split(char *tab, int index[4][6])
{
	int num;
	int type;

	num = 0;
	type = 0;
	while (*tab)
	{
		if (*tab >= '1' && *tab <= '6')
		{
			index[type][num] = (*tab - 48);
			num++;
			if (num == 6)
			{
				num = 0;
				type++;
			}
		}
		tab++;
	}
}
