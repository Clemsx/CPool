/*
** my_strupcase.c for my_strupcase in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 13:27:30 2016 clement xia
** Last update Tue Oct 11 13:28:09 2016 clement xia
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

int     *my_strupcase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ( str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
