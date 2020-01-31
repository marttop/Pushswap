##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

NAME	=	push_swap

SRC	=	main.c \
		utils/error.c \
		utils/get_int.c \
		utils/fill_nodes.c \
		utils/get_end.c \
		src/move_to_lst.c \
		src/rotate_begining.c \
		src/sort_nodes.c \

SRC_TEST	=	tests/test_all.c \
				utils/error.c \
				utils/get_int.c \
				utils/fill_nodes.c \
				utils/get_end.c \
				src/move_to_lst.c \
				src/rotate_begining.c \
				src/sort_nodes.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra
CFLAGS	+=	-I./include -g3
FFLAGS = -L/usr/local/lib -lcriterion --coverage
FFLAGS += -fprofile-arcs -ftest-coverage

all	:	$(NAME)

tests_run :
	gcc -o test_run -O0 $(CFLAGS) $(FFLAGS) $(SRC_TEST)
	./test_run
coverage :
	/home/mszuts/.local/bin/gcovr --branch --exclude tests/
$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ)
clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *gcda *gcno test_run

re	:	fclean all
