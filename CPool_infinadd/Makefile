##
## Makefile for Makefile in /home/clemsx/delivery/CPool_Day12
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Wed Oct 19 08:01:14 2016 clement xia
## Last update Tue Oct 25 13:18:10 2016 clement xia
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror

SRCS	= infin_add.c

OBJS	= $(SRCS:.c=.o)

NAME	= infin_add

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) main.c infin_sub.c -Llib/my -lmy

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
