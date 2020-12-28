/*
** my_put_nbr.c for my_put_nbr in /run/media/clemsx/34B2-12F4/julien3
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 08:01:40 2016 clement xia
** Last update Wed Oct 12 18:45:29 2016 clement xia
*/

int	my_put_nbr(int nb)
{
  long	nbr;
  int	neg;

  nbr = nb;
  if (nb < 0)
    {
      neg = 1;
      my_putchar('-');
      nbr = -1 * nbr;
    }
  else
    {
      neg = 0;
    }
  if (nbr >= 10)
    {
      my_put_nbr(nbr / 10);
    }
  my_putchar(48 + (nbr % 10));
}
