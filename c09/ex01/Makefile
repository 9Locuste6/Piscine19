# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gorban <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 03:06:58 by gorban            #+#    #+#              #
#    Updated: 2019/07/23 20:52:46 by gorban           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c ft_strcmp.c)
OBJS = $(SRC:.c=.o)

CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I includes/

all : $(NAME)

$(NAME) : $(OBJS) includes/
	ar -rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean :    clean
	rm -f $(NAME)

re: fclean all 
