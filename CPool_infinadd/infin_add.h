/*
** infin_add.h for infin_add in /home/clemsx/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 24 10:16:55 2016 clement xia
** Last update Mon Oct 24 13:23:02 2016 clement xia
*/

#include <stdlib.h>

typedef struct	s_number
{
  char	*data;
  struct number *next;
}	t_number;

int	my_putstr(char *str);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
