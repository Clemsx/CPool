/*
** my_print_comb.c for my_print_comb in /home/clemsx/delivery/CPool_Day03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct  5 11:06:55 2016 clement xia
** Last update Thu Oct  6 16:40:42 2016 clement xia
*/
int	my_print_nb(char a, char b, char c)
{
  my_putchar(a);
  my_putchar(b);
  my_putchar(c);

  if( a == 55 && b == 56 && c == 57 )
    {
      my_putchar('\n');
    }
  else
    {
      my_putchar(',');
      my_putchar(' ');
    }
  
}

int     my_print_comb()
{
  char  a;
  char  b;
  char  c;

  a = '0';
  b = '1';
  c = '2';

  while(a < ':')
    {
      while(b < ':')
	{
	  while(c < ':')
	    {
	      if(a < b && b < c)
		{
		  my_print_nb(a, b, c);
		}
	      c++;
	    }
	  c = '0';
	  b++;
	}
      b = '0';
      a++;
    }
}
