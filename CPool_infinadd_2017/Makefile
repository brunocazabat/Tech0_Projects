##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## make
##

SRC	=	main.c

NAME	=	infin_add

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -lmy -L./lib/my
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
