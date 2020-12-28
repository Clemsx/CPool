/*
** my_params_in_list.c for my_params_in_list in /home/clemsx/delivery/CPool_Day11/task01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 17 13:55:25 2016 clement xia
** Last update Wed Oct 19 08:17:35 2016 clement xia
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

t_list  *my_add(void *data, t_list *list)
{
  t_list	*l;

  l = malloc(sizeof(t_list));
  l->data = data;
  l->next = list;
  return (l);
}

t_list	*my_params_in_list(int ac, char **av)
{
  int	i;
  struct s_list *liste;
  
  i = 0;
  liste = 0;
  while (i < ac)
    {
      liste = my_add(av[i], liste);
      i++;
    }
  return (liste);
}

void	my_show_list(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
