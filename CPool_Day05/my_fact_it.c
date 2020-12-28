/*
** my_fact_it.c for my_fact_it in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 12:23:52 2016 clement xia
** Last update Sun Oct  9 16:33:28 2016 clement xia
*/

int     my_fact_it(int nb)
{
  int i;
  int res;

  i = 1;
  res = nb;

  if ( nb == 0 )
    {
      res = 1;
      return (res);
    }
  else if ( nb < 0 )
    {
      res = 0;
      return (res);
    }
  else
    {
      while ( nb > i )
	{
	  res = res * i;
	  i++;
	}
      return (res);
    }
}
