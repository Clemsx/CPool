/*
** my_print_comb2.c for my_print_comb2 in /home/clemsx/delivery/CPool_Day03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct  5 13:34:23 2016 clement xia
** Last update Thu Oct  6 10:16:55 2016 clement xia
*/

int     my_print_nb2(int a, int b, int c, int d)
{
  if( (a * 10 + b) < (c * 10 + d) )
    {
      my_putchar(a);
      my_putchar(b);
      my_putchar(' ');
      my_putchar(c);
      my_putchar(d);
      
      if(a == '9' && b == '8' && c == '9' && d == '9')
	{
	  my_putchar('.');
	}
      else
	{
	  my_putchar(',');
	}
      
      my_putchar(' ');
    }
}

int     my_print_comb2()
{
  int a;
  int b;
  int c;
  int d;

  a = '0';
  b = '0';
  c = '0';
  d = '1';
  
  while( a < ':' )
    {
      while( b < ':' )
	{
	  while( c < ':' )
	    {
	      while(d < ':')
		{
		  if( (a * 10 + b) < (c * 10 + d) )
		    {
		      my_print_nb(a, b, c, d);
		    }
		  d++;
		}
	      d = '0';
	      c++;
	    }
	  c = '0';
	  b++;
	}
      b  = '0';
      a++;
    }
}
