/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list.c in /home/clemsx/delivery/CPool_Day11/task06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 14:41:23 2016 clement xia
** Last update Wed Oct 19 08:22:37 2016 clement xia
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

void	*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  struct s_list	*list;
  int	i;

  i = 0;
  list = begin;
  while (list != NULL)
    {
      if ((*cmp)(list->data, data_ref) == 0)
	return (list->data);
      list = list->next;
    }
}
