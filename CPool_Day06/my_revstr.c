/*
** my_revstr.c for my_revstr in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 10 10:46:34 2016 clement xia
** Last update Tue Oct 11 08:14:01 2016 clement xia
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

char     *my_revstr(char *str)
{
  int   i;
  int   j;
  char  k;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  i--;
  while ( j < i )
    {
      k = str[j];
      str[j] = str[i];
      str[i] = k;
      j++;
      i--;
    }
  return (str);
}
