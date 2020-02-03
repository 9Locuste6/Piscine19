/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:26:41 by gorban            #+#    #+#             */
/*   Updated: 2019/07/17 11:37:29 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int value;
	int fibonacci[4];

	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	fibonacci[3] = 2;
	value = fibonacci[index];
	if (index < 0)
		return (-1);
	if (index > 3)
		value = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (value);
}

int main()
{

	printf("%d", ft_fibonacci(42));
}
