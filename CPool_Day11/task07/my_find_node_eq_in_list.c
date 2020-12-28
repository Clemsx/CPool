/*
** my_find_node_eq_in_list.c for my_find_node_eq_in_list in /home/clemsx/delivery/CPool_Day11/task07
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 15:02:16 2016 clement xia
** Last update Wed Oct 19 08:34:21 2016 clement xia
*/

#include "../include/my.h"
#include "../include/mylist.h"

t_list	*my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  struct s_list *list;
  int	i;

  i = 0;
  list = begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  return (list);
	}
    }
}
