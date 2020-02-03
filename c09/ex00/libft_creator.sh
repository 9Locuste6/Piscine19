# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gorban <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 22:55:28 by gorban            #+#    #+#              #
#    Updated: 2019/07/23 11:00:41 by gorban           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c && ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o && ranlib libft.a && rm -rf *.o
