/*
** my_square_root.c for my_square_root in /home/clemsx/delivery/CPool_Day05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Fri Oct  7 14:54:37 2016 clement xia
** Last update Sun Oct  9 16:39:09 2016 clement xia
*/

int     my_square_root(int nb)
{
  int   i;

  i = 0;

  if ( nb < 0 )
    {
      return (0);
    }
  else
    {
      while ( i < nb )
	{
	  if ( my_power_rec(i, 2) == nb )
	    {
	      return (i);
	    }
	  else
	    {
	      return (0);
	    }
	  i = i + 1;
	}
    }
}
