/*
** rush3.c for rush3.c in /home/Liloue/CPool/Rush3/CPool_rush3
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Sat Oct 29 17:31:09 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:43:46 2016 Laetitia POULET de GRIMOUARD
*/

#include "rush3.h"

int	count_line(char *buff)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (buff[i] != 0)
    {
      if (buff[i] == '\n')
	count++;
      i++;
    }
  return (count);
}

int	count_col(char *buff)
{
  int	i;

  i = 0;
  while (buff[i] != '\n')
    i++;
  return (i);
}

char	find_rush(char *buff)
{
  char	rush;
  int	nb_a;

  nb_a = 0;
  rush = first_carac(buff);
  if (rush == '0')
    {
      nb_a = count_a(buff);
      if (nb_a == 2)
	rush = '3';
      else
	rush = last_carac(buff);
    }
  return (rush);
}

void	rush3(char *buff)
{
  int	nb_line;
  int	nb_col;
  char	rush;

  if (buff[0] != 0)
    {
      nb_line = count_line(buff);
      nb_col = count_col(buff);
      rush = find_rush(buff);
      if (rush == 0)
	my_putstr("none\n");
      else
	display(rush, nb_line, nb_col);
    }
  else
    my_putstr("none\n");
}
