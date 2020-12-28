##
## Makefile for first_makefile in /home/julien_wilmet/delivery/lib/my
## 
## Made by Julien Wilmet
## Login   <julien_wilmet@epitech.net>
## 
## Started on  Fri Oct 14 08:28:35 2016 Julien Wilmet
## Last update Sat Oct 15 20:11:26 2016 Julien Wilmet
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror

NAME	= libmy.a

SRCS	= my_put_nbr.c		\
	  my_putstr.c		\
	  my_strcat.c		\
	  my_strcmp.c		\
	  my_str_isnum.c	\
	  my_strlen.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	cp $(NAME) ../
	cp my.h ../../include/

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
