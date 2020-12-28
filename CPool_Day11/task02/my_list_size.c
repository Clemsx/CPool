/*
** my_list_size.c for my_list_size in /home/clemsx/delivery/CPool_Day11/task02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 07:46:26 2016 clement xia
** Last update Wed Oct 19 08:18:20 2016 clement xia
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

int	my_list_size(t_list *begin)
{
  struct s_list	*tmp;
  int	i;

  tmp = begin;
  i = 0;
  while (tmp != NULL)
    {
      i = i + 1;
      tmp = tmp->next;
    }
  return (i);
}
