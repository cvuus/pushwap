SRCS = ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstdelfirst.c\
	ft_lstdelone.c\
	ft_lstlast.c\
	ft_lstnew.c\
	ft_lstsize.c\
	ft_get.c\
	ft_lstremove.c\
	ft_lstchangedata.c\
	ft_printcircularlist.c\

NAME	= libcircularlinkedlist.a
PRINTF = ../libftprintf/libftprintf.a
LIBFT	= ../libft/libft.a

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra

.c.o: 
	@${CC} -c ${FLAGS} $< -o ${<:.c=.o} -I ${LIBFT}

all: ${LIBFT} ${NAME}

${NAME}: ${OBJS}
	@cp ${PRINTF} ${NAME}
	@ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
