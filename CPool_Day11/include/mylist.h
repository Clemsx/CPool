/*
** mylist.h for mylist in /home/clemsx/delivery/CPool_Day11/include
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 17 13:44:42 2016 clement xia
** Last update Tue Oct 18 08:06:08 2016 clement xia
*/

#include <stdlib.h>

typedef struct	s_list
{
  void	*data;
  struct s_list	*next;
}	t_list;

t_list	*my_params_in_list(int ac, char **av);
int	my_list_size(t_list *begin);
int	my_putstr(char *str);
void	my_putchar(char c);
int	my_put_nbr(int nb);
