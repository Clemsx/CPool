/*
** my_apply_on_list.c for my_apply_on_list in /home/clemsx/delivery/CPool_Day11/task04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 09:04:02 2016 clement xia
** Last update Wed Oct 19 08:20:20 2016 clement xia
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

int	my_apply_on_list(t_list *begin, int (*f)(void*))
{
  struct s_list *list;

  list = begin;
  while (list)
    {
      f(list->data);
      list = list->next;
    }
}
