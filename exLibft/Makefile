LIBC	= ${wildcard libc_ft/*.c} 
ADDIT	= ${wildcard additional_ft/*.c}

INCLUDE	= ./includes/

OBJS	= ${LIBC:.c=.o} ${ADDIT:.c=.o} 

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
