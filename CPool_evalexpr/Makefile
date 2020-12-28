##
## Makefile for Makefile in /home/clemsx/delivery/CPool_Day12
## 
## Made by clement xia
## Login   <clemsx@epitech.net>
## 
## Started on  Wed Oct 19 08:01:14 2016 clement xia
## Last update Thu Oct 27 10:14:46 2016 clement xia
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror

SRCS	= eval_expr.c

OBJS	= $(SRCS:.c=.o)

NAME	= eval_expr

LIB	= -Llib/my -lmy

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(LIB)

clean:
	$(RM) $(OBJS)

.PHONY: all clean fclean re
