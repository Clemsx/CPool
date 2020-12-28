##
## Makefile for rush2 in /home/julien_wilmet/CPool_rush2
## 
## Made by Julien Wilmet
## Login   <julien_wilmet@epitech.net>
## 
## Started on  Sat Oct 15 11:11:28 2016 Julien Wilmet
## Last update Sat Oct 15 11:19:40 2016 Julien Wilmet
##

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

CFLAGS	+= -L./lib -lmy

CFLAGS	+= -I./include

NAME	= rush2

SRCS	= rush2.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
