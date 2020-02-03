/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:05:57 by gorban            #+#    #+#             */
/*   Updated: 2019/07/21 17:57:12 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"

int		main(int argc, char **argv)
{
	char	**dict;
	int		size;
	int		sizedict;

	size = ft_strlen(argv[argc - 1]);
	if (size == 0 || argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
		dict = parse(argv[1], &sizedict);
	if (argc == 2)
	{
		if (ft_atoi(argv[argc - 1]) > 999999999999)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		dict = parse("numbers.dict", &sizedict);
	}
	if (!dict)
		return (0);
	find_nbr(argv[argc - 1], size, dict, sizedict);
	return (0);
}
