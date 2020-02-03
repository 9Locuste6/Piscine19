/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:52:44 by gorban            #+#    #+#             */
/*   Updated: 2019/07/15 02:09:42 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H

# define INCLUDE_H

void	ft_split(char *tab, int index[4][6]);

int		ft_condition(int col, int row, int grid[6][6], int index[4][6], int n);

int		ft_in_condition(int col, int row, int grid[6][6],
		int index[4][6], int type);

void	afficher_un_tableau(int grid[6][6], int n);

void	cree_un_tableau(int grid[6][6], int len);

int		ft_error(int n, char *str);

int		ft_strlen(char *str);

void	ft_putchar(char c);

int		ft_solve(int col, int row, int grid[6][6],
		int index[6][6], int n);

int		check_used(int grid[6][6], int row, int col, int n);

int		check_up_col_view(int grid[6][6], int col);

int		check_down_col_view(int grid[6][6], int col);

int		check_right_row_view(int grid[6][6], int row);

int		check_left_row_view(int grid[6][6], int row);

#endif
