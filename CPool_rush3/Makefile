##
## Makefile for Makefile in /home/Liloue/CPool/Day10/CPool_Day10/do-op
## 
## Made by Laetitia POULET de GRIMOUARD
## Login   <Liloue@epitech.net>
## 
## Started on  Fri Oct 14 15:38:45 2016 Laetitia POULET de GRIMOUARD
## Last update Sat Oct 29 21:25:26 2016 Laetitia POULET de GRIMOUARD
##

SRC	=	main.c		\
		rush3.c		\
		tools.c		\
		display.c	\
		my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

CFLAGS	+=	-Wextra -Wall -Werror
CFLAGS	+=	-I./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
