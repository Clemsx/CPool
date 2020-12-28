/*
** display.c for display in /home/Liloue/CPool/Rush3/CPool_rush3
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Sat Oct 29 18:29:24 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:26:16 2016 Laetitia POULET de GRIMOUARD
*/

#include "rush3.h"

void	display_rush(char rush, int nb_line, int nb_col)
{
  my_putstr("[rush1-");
  my_putchar(rush);
  my_putstr("] ");
  my_put_nbr(nb_col);
  my_putchar(' ');
  my_put_nbr(nb_line);
}

void	display(char rush, int nb_line, int nb_col)
{
  if (rush != '6')
    display_rush(rush, nb_line, nb_col);
  else
    {
      display_rush('3', nb_line, nb_col);
      my_putstr(" || ");
      display_rush('4', nb_line, nb_col);
      my_putstr(" || ");
      display_rush('5', nb_line, nb_col);
    }
  my_putchar('\n');
}
