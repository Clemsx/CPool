##
## Makefile for Makefile in /home/clemsx/delivery/CPool_Day10
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Fri Oct 14 18:46:41 2016 clement xia
## Last update Mon Oct 17 12:51:06 2016 clement xia
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror

NAME	= libmy.a

SRCS	= $(shell find -name '*.c')

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

.PHONY: all clean fclean re
