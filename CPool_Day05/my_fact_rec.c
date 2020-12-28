/*
** my_fact_rec.c for my_fact_rec in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 12:26:40 2016 clement xia
** Last update Sun Oct  9 16:35:48 2016 clement xia
*/

int     my_fact_rec(int nb)
{
  int   res;

  res = 0;

  if ( nb < 0 )
    {
      return (0);
    }
  if ( nb == 1 )
    {
      return (1);
    }

  res = nb * my_fact_rec(nb - 1);
  return (res);
}
