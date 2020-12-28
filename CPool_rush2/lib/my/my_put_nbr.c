/*
** my_put_nbr2.c for my_put_nbr in /home/julien_wilmet/delivery
** 
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
** 
** Started on  Wed Oct  5 20:20:27 2016 Julien Wilmet
** Last update Sat Oct 15 15:43:53 2016 Julien Wilmet
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_put_nbr(int nb)
{
  long	nbr;

  nbr = nb;
  if (nb < 0)
    {
      my_putchar('-');
      nbr = -1 * nbr;
    }
  if (nbr >= 10)
    {
      my_put_nbr(nbr / 10);
    }
  my_putchar(48 + (nbr % 10));
  return (0);
}
