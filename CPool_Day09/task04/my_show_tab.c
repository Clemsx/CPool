/*
** my_show_tab.c for my_show_tab in /home/clemsx/delivery/CPool_Day09/task04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct 14 11:38:49 2016 clement xia
** Last update Fri Oct 14 16:36:05 2016 clement xia
*/

#include <stdlib.h>

struct s_stock_par *my_param_to_tab(int ac, char **av)
{
  s_stock_par *stock_param;
  int   i;

  i = 0;
  stock_param = malloc(sizeof(struct s_stock_par) * (ac + 1));
  if (stock_param == NULL)
    return (NULL);
  while (i < ac)
    {
      stock_param[i].size_param = my_strlen(av[i]);
      stock_param[i].str = av[i];
      stock_param[i].copy = my_strdup(av[i]);
      stock_param[i].tab = my_str_to_wordtab(av[i]);
      i++;
    }
  stock_param[ac].str = '\0';
  return (stock_param);
}

int	my_show_tab(struct s_stock_par *par)
{
  int	i;

  i = 0;
  while (par[i].str != '\0') 
    {
      my_putstr(par[i].copy);
      my_putchar('\n');
      my_put_nbr(par[i].size_param);
      my_putchar('\n');
      my_show_wordtab(par[i].tab);
      i++;
    }
}
