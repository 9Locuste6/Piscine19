/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:22:13 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 20:26:22 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(char *c)
{
	while (*c)
	{
		write(1, &(*c), 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		sort;
	char	*tempo;

	x = argc - 1;
	sort = 1;
	while (sort < x)
		if (ft_strcmp(argv[sort], argv[sort + 1]) > 0)
		{
			tempo = argv[sort];
			argv[sort] = argv[sort + 1];
			argv[sort + 1] = tempo;
			sort = 1;
		}
		else
			sort++;
	argv++;
	while (*argv)
	{
		ft_sort_params(*argv);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
