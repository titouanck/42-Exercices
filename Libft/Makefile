SRCS	= ${LIB}${wildcard *.c} ${ADDIT}${wildcard *.c} 

LIBC	= ./libc_ft/ 
ADDIT	= ./additional_ft/

INCLUDE	= ./includes/

OBJS	= ${SRCS:.c=.o} 

LIB		= libft.a

CC		= gcc

ARRC	= ar rc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I ${INCLUDE}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}:		${OBJS}
			${ARRC} -o ${LIB} ${OBJS}

all:		${LIB}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${LIB}

re:			fclean all

.PHONY: all clean fclean re 
