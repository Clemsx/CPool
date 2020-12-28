/*
** my_put_nbr.c for my_put_nbr in /home/clemsx/delivery/CPool_Day03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct  5 14:21:57 2016 clement xia
** Last update Wed Oct  5 17:45:56 2016 clement xia
*/

int     my_put_nbr(int nb)
{
  int   a;
  int   b;

  a = nb;
  b = 1;
  while (a > 10)
    {
      nb = nb / 10;
      b = b * 10;
      if (nb < 10)
	{
	  my_putchar(nb + '0');
	  nb = (a - (nb * b));
	  a = nb;
	}

    }
  nb = nb % 10;
  my_putchar(nb + '0');
  return (0);
}
