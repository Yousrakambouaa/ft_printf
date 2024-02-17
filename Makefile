NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c  ft_putnbr_u.c ft_puthexa.c ft_putadd.c

OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re bonus