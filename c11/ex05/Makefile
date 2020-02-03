# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gorban <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 03:06:58 by gorban            #+#    #+#              #
#    Updated: 2019/07/25 16:27:45 by gorban           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	do-op

SRCS	=	srcs/ft_error.c srcs/do_op.c srcs/operation.c

OBJS	=	${SRCS:.c=.o}

HEAD	=	includes/

GCC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
				$(GCC) $(CFLAGS) -I $(HEAD) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re $(NAME)
