##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## rush2
##

SRC=		basic_functions.c	\
		count_functions.c	\
		display_functions.c	\
		key_arrow_functions.c	\
		sokoban.c	

OBJ=		$(SRC:.c=.o)

NAME=		my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -lncurses
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
re:	fclean all
