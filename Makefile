##
## EPITECH PROJECT, 2024
## Makefile printf
## File description:
## Makefile my_printf
##

CFLAGS	=	-W -Wall -Wextra

SRC	=	./my_put_nbr.c	\
		./my_putchar.c	\
		./my_putnbr_base.c	\
		./my_putstr.c	\
		./my_revstr.c	\
		./my_strlen.c	\
		./my_hexa_min_printf.c	\
		./my_hexa_printf.c	\
		./my_octet_printf.c	\
		./my_put_nbr_printf.c	\
		./my_putchar_printf.c	\
		./my_putstr_printf.c	\
		./my_strncmp.c	\
		./my_put_pourcent.c	\
		./my_putunsigned.c	\
		./my_putunsigned_printf.c	\
		./my_putfloat.c	\
		./my_putfloat_printf.c	\
		./my_putscientific.c	\
		./my_putscientific_uppercase.c	\
		./my_putscientific_lowercase.c	\
		./my_putpointer.c	\
		./my_putpointer_printf.c	\
		./my_putgeneral.c	\
		./my_putgeneral_lowercase.c	\
		./my_putgeneral_uppercase.c	\
		./intlen.c	\
		./my_compute_power_it.c	\
		./my_put_nnbr.c	\
		./my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

unit_tests:	CFLAGS += -lcriterion --coverage

unit_tests:	fclean	$(NAME)
	gcc -o unit_tests $(OBJ) tests/test.c $(CFLAGS)

tests_run: unit_tests
	./unit_tests
