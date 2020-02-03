/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:16:58 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 01:05:05 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <unistd.h>

void	ft_modulo(int c1, int c2);

void	ft_divi(int c1, int c2);

void	ft_multi(int c1, int c2);

void	ft_soustraction(int c1, int c2);

void	ft_addition(int c1, int c2);

int		ft_is_op(char *signe);

int		ft_is_nbr(char c);

int		ft_strlen(char *str);

void	ft_putnbr(int nbr);

int		atoi(char *str);

void	*ft_find_op(char c);

void	ft_putchar(char c);

#endif
