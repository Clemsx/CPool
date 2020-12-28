/*
** my_apply_on_eq_in_list.c for my_apply_on_eq_in_list in /home/clemsx/delivery/CPool_Day11/task05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 10:41:55 2016 clement xia
** Last update Wed Oct 19 08:34:47 2016 clement xia
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

int	my_apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)())
{
  int	i;
  struct s_list	*list;

  i = 0;
  list = begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	i = f(list->data);
      list = list->next;
    }
  return (i);
}
