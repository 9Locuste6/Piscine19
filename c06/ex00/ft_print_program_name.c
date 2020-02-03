/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:12:14 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 20:19:49 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *c)
{
	while (*c)
	{
		write(1, &(*c), 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	char nl;

	nl = 10;
	(void)argc;
	ft_print_program_name(argv[0]);
	write(1, &nl, 1);
	return (0);
}
