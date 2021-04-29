SRCS 	= main.c ft_check_line.c ft_final.c ft_get_n_rep.c ft_read.c ft_recursive.c
OBJN	= ./*.o
OBJS 	= ${SRCS: .c=.o}
NAME 	= rush-02
CC 		= gcc
RM 		= rm -f
CFLAGS 	= -Wall -Wextra -Werror

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: 		${NAME}

run:
			./${NAME}

clean:
			${RM} ${OBJN}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

norm:
			norminette *.[ch]

.PHONY:		all run clean fclean norm
