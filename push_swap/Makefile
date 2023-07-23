SRCS	= ./src/command/rotate.c\
	./src/command/push.c\
	./src/command/reverseRotate.c\
	./src/command/swap.c\
	./src/sorting.c\
	./src/ft_atoi_ps.c\
	./src/input_handler.c\
	./src/push_swap_utils.c\
	./src/sort_small.c\
	push_swap.c\
		

NAME = push_swap

CIRCULARLINKEDLIST = ./libcircularlinkedlist/libcircularlinkedlist.a

LIBFT = ./libft/libft.a

PRINTF = ./libftprintf/libftprintf.a

HEADER = -I./push_swap.h

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
	@${CC} -c $< -o ${<:.c=.o} -I ${LIBFT}

all: ${LIBFT} ${PRINTF} ${CIRCULARLINKEDLIST} ${NAME}
	

${LIBFT}:
	@echo "\033[33mCreating libft.a ..."
	@make -C ./libft
	@echo "\033[32mCONGRATULATIONS libft created\n"

${PRINTF}:
	@echo "\033[33mCreating libftprintf.a ..."
	@make -C ./libftprintf
	@echo "\033[32mCONGRATULATIONS libftprintf created\n"	

${CIRCULARLINKEDLIST}:
	@echo "\033[33mCreating libcircularlinkedlist.a ..."
	@make -C ./libcircularlinkedlist
	@echo "\033[32mCONGRATULATIONS libcircularlinkedlist created\n"	

${NAME}: ${OBJS} ${LIBFT} ${CIRCULARLINKEDLIST}
	@echo "\033[33mCompiling push_swap..."
	${CC} ${FLAGS} ${HEADER} ${LIBFT} ${PRINTF} ${CIRCULARLINKEDLIST} ${OBJS} -o ${NAME}
	@echo "\033[32m\nCompiling push_swap done \n ** Now you can use ./push_swap to start the program **\033[0m"

clean:
	${RM} ${OBJS}

fclean: clean
	make fclean -C ./libft
	make fclean -C ./libcircularlinkedlist
	make fclean -C ./libftprintf
	${RM} ${NAME}

re: fclean all

# bonus:
# 	${MAKE} ADD_BONUS=1
# BONUSSRCS = LIST ALL BONUSSRC FILES

# BONUSOBJS = ${BONUSSRCS:.c=.o}

# ifdef ADD_BONUS
# ALLFILES =${OBJS} ${BONUSOBJS}
# else 
# ALLFILES = ${OBJS}
# endif