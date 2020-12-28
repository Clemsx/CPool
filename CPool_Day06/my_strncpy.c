/*
** my_strncpy.c for my_strncpy in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 10 09:00:26 2016 clement xia
** Last update Tue Oct 11 08:13:09 2016 clement xia
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

char     *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if ( n > i )
    {
      dest[i] = '\0';
    }
  return (dest);
}
