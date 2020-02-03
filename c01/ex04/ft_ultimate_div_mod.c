/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:03:07 by gorban            #+#    #+#             */
/*   Updated: 2019/07/05 16:31:19 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempo;

	tempo = *a / *b;
	*b = *a % *b;
	*a = tempo;
}

int	main()
{
	int a;
	int b;
	int *pa;
	int *pd;
	
	a = 10;
	b = 3;
	pa = &a;
	pd = &b;

	ft_ultimate_div_mod(pa, pd);

	ft_putchar(*pa + 48);
	ft_putchar(*pd + 48);
}
