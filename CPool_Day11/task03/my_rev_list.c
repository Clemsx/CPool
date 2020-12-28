/*
** my_rev_list.c for my_res_list in /home/clemsx/delivery/CPool_Day11/task03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 18 08:32:18 2016 clement xia
** Last update Wed Oct 19 08:19:40 2016 clement xia
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"
 
int	my_rev_list(t_list **begin)
{
  struct s_list	*list1;
  struct s_list	*list2;
  struct s_list	*list3;

  list2 = NULL;
  list1 = *begin;
  while (list2 != NULL)
    {
      list3 = list1->next;
      list1->next = list2;
      list2 = list1;
      list1 = list3;
    }
  list1->next = list2;
  *begin = list1;
  return (0);
}
