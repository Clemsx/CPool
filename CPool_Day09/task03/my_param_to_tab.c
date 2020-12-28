/*
** my_param_to_tab.c for my_param_to_tab in /home/clemsx/delivery/CPool_Day09/task03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 13 17:45:39 2016 clement xia
** Last update Fri Oct 14 10:24:54 2016 clement xia
*/

#include <stdlib.h>
#include "s_stock_par.h"

struct s_stock_par *my_param_to_tab(int ac, char **av)
{
  s_stock_par *stock_param;

  stock_param = malloc(sizeof(struct s_stock_par) * (ac + 1));
  if (stock_param == NULL)
    return (NULL);
  stock_param->size_param = my_strlen(av);
  stock_param->str = my_strdup(av);
  stock_param->copy = my_strdup(av);
  stock_param->tab = my_show_wordtab(av);

  return (stock_param);
}

int	main(int argc, char **argv)
{
  s_stock_par *stock_param;
  
  stock_param = my_param_to_tab(argc, argv);
  my_show_wordtab(stock_param);
  return (0);
}
