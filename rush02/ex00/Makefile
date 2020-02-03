SRCS    = main.c parse.c find_nbr.c ft_split.c fonction.c

NAME    = rush-02

all :		${NAME}

${NAME}:
	gcc -o ${NAME} -Wall -Wextra -Werror ${SRCS}

clean:
	rm -f *.o

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		srcs name all clean fclean re
