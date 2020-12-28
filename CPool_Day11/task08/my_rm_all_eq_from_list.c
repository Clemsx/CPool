/*
** my_rm_all_eq_from_list.c for my_rm_all_eq_from_list in /home/clemsx/delivery/CPool_Day11/task08
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 16:14:18 2016 clement xia
** Last update Wed Oct 19 08:32:51 2016 clement xia
*/

#include "../include/my.h"
#include "../include.mylist.h"

int	my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  struct s_list	*list;
  int	i;

  i = 0;
  list = *begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  list->next = list->next->next;
	  free(list->next);
	}
      list = list->next;
    }
}
