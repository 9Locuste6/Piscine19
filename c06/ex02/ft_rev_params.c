/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:07:20 by gorban            #+#    #+#             */
/*   Updated: 2019/07/11 19:18:00 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(char *c)
{
	while (*c)
	{
		write(1, &(*c), 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	int x;

	x = argc - 1;
	while (x > 0)
	{
		ft_rev_params(argv[x]);
		ft_putchar('\n');
		x--;
	}
	return (0);
}
