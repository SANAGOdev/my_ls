##
## EPITECH PROJECT, 2022
## makefile
## File description:
## builder
##

OBJ = *.o

NAME = my_ls

all:
	gcc src/*.c -o my_ls

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
