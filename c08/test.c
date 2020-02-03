/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:34:03 by gorban            #+#    #+#             */
/*   Updated: 2019/07/22 12:58:17 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

char    *ft_strdup(char *src)
{
	char    *copy;
	int        x;
	int        size;

	size = 0;
	while (src[size])
		size++;
	size++;
	x = 0;
	if (!(copy = malloc(sizeof(*src) * size)))
		return (0);
	while (src[x])
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}

int    ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str    *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int i;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(*av);
		tab[i].str = *av;
		tab[i].copy = ft_strdup(*av);
		av++;
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void    ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + 48);
}

void ft_show_tab(struct s_stock_str *par)
{
	while (par && par->str)
	{
		ft_putchar('a');
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}

int main(int argc, char **argv) {
	(void) argv;
	int n = argc - 1;
	char **tab = malloc(sizeof(char *) * n);
	int i = 0;
	while (i < n)
	{
		tab[i] = ("lol");
		i++;
	}
	ft_putchar('s');
	ft_show_tab(ft_strs_to_tab(n, tab));

	return (0);
}
