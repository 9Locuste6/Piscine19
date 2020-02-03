/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 00:42:39 by gorban            #+#    #+#             */
/*   Updated: 2019/07/22 10:57:48 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04/ft_strs_to_tab.c"
#include "ex05/ft_show_tab.c"
#include "ft_stock_str.h"

int main()
{
	t_stock_str *tab;
	char a[] = "azerty";
	char b[] = "qwerty";
	char c[] = "et l'autre";
	char ** tab = malloc(sizeof(char *)* 3);
	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
	ft_show_tab(ft_strs_to_tab(3, tab));
}
