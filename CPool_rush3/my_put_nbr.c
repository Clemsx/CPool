/*
** my_put_nbr.c for my_put_nbr.c in /home/Liloue/CPool/Day03/CPool_Day03
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Wed Oct  5 15:12:17 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:28:34 2016 Laetitia POULET de GRIMOUARD
*/

#include "rush3.h"

int	my_put_nbr(int nb)
{
  int	round;
  long	nb_temp;
  long	nbr;

  round = 1;
  nbr = nb;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  nb_temp = nbr;
  while (nb_temp > 9)
    {
      nb_temp = nb_temp / 10;
      round = round * 10;
    }
  while (round > 1)
    {
      my_putchar(nbr / round + 48);
      nbr = nbr % round;
      round = round / 10;
    }
  my_putchar(nbr / round + 48);
  return (0);
}
