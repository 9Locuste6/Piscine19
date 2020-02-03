/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:33:41 by gorban            #+#    #+#             */
/*   Updated: 2019/07/21 17:58:54 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# define BUF_SIZE 4096

char	**parse(char *link, int *sizedict);

void	rm_space(char *file);

char	*ft_memcat(char *file, char buf[BUF_SIZE], int file_size,
				int buf_size);

int		read_file(int fildes, char **file);

char	**ft_split(char *str, char *charset);

char	*ft_complet_tab(char *str, int min, int max);

int		ft_dictlen(char *str, char *charset);

int		ft_is_in_base(char nbr, char *base);

int		ft_strlen(char *str);

long	ft_power(long nb, int power);

long	ft_atoi(const char *str);

void	find_nbr(char *nbr, int size, char **dict, int sizedict);

void	find_nbr2(long nb, long div, char **dict);

void	ft_write_nbr(long div, char **dict, int sizedict);

void	ft_write_nbr2(int index, long div, char **dict);

void	ft_putstr(char *str);

void	ft_putchar(char c);

#endif
