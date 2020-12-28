/*
** my_power_rec.c for my_power_rec in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 13:32:19 2016 clement xia
** Last update Sun Oct  9 16:38:11 2016 clement xia
*/

int     my_power_rec(int nb, int p)
{
  if ( p < 0 )
    {
      return (0);
    }
  else if ( p == 0 )
    {
      return (1);
    }
  else if ( p == 1 )
    {
      return (nb);
    }
  else
    {
      return (nb * my_power_rec(nb, p - 1));
    }
}
