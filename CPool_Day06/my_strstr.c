/*
** my_strstr.c for my_strstr in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 10 16:09:01 2016 clement xia
** Last update Tue Oct 11 07:46:05 2016 clement xia
*/

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char    *my_strstr(char *str, char *to_find)
{
  int   i;
  int   j;
  int   cp;

  cp = my_strlen(to_find);
  i = 0;
  while ( str[i] != '\0' )
    {
      if ( str[i] == to_find[0] )
	{
	  j = 0;
	  while (to_find[j] != '\0')
	    {
	      j++;
	      if ( cp == j )
		return (&str[i]);
	    }
	}
      i++;
    }
  return (0);
}
