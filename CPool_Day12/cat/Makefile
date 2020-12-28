##
## Makefile for Makefile in /home/clemsx/delivery/CPool_Day12
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Wed Oct 19 08:01:14 2016 clement xia
## Last update Wed Oct 19 20:18:45 2016 clement xia
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror

SRCS	= cat.c

OBJS	= $(SRCS:.c=.o)

NAME	= cat

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) -Llib/my -lmy

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
