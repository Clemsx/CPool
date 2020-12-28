/*
** my_strlowercase.c for my_strlowercase in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 13:54:13 2016 clement xia
** Last update Tue Oct 11 13:54:34 2016 clement xia
*/

int     my_putchar(char c)
{
  write(1, &c, 1);
}

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

int     *my_strlowercase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ( str[i] <= 90 && str[i] >= 65  )
	{
	  str[i] = str[i] + 32;
	}
      i++;
    }
 return (str);
}
