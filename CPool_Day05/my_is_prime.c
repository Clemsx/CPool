/*
** my_is_prime.c for my_is_prime in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 15:45:35 2016 clement xia
** Last update Sun Oct  9 16:36:45 2016 clement xia
*/

int     my_is_prime(int nb)
{
  int   i;

  if ( nb == 2 )
    {
      return (1);
    }
  else if ( nb < 2 )
    {
      return (0);
    }
  else if ( nb % 2 == 0 )
    {
      return (0);
    }
  else
    {
      i = 3;

      while ( i * i <= nb )
	{
	  if ( nb % i == 0 )
	    {
	      return (0);
	    }
	  i = i + 2;
	}
    }
}
