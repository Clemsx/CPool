/*
** my_power_it.c for my_power_it in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 13:19:31 2016 clement xia
** Last update Sun Oct  9 16:37:28 2016 clement xia
*/

int     my_power_it(int nb, int p)
{
  int   res;

  res = nb;

  if ( p == O )
    {
      return (1);
    }
  if ( p < 0 )
    {
      return (0);
    }
  while(p > 1)
    {
      res= res * nb;

      if (res < 0)
	{
	  return (0);
	}
      p= p - 1;
    }
  return (res);
}
