/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:53:53 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 20:22:30 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *c)
{
	while (*c)
	{
		write(1, &(*c), 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	argv++;
	while (*argv)
	{
		ft_print_params(*argv);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
