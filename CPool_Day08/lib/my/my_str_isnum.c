/*
** my_str_isnum.c for my_str_isnum in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 16:12:30 2016 clement xia
** Last update Wed Oct 12 18:52:29 2016 clement xia
*/

int     my_str_isnum(char *str)
{
  int   i;
  int   j;
  int   cp;

  i = 0;
  j = 0;
  cp = 0;
  while (str[j] != '\0')
    {
      j = j + 1;
      if (j > 10)
	{
	  str[i] = '\0';
	}
    }
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
	{
	  cp = cp + 1;
	}
      i++;
    }
  if (j == cp)
    return (1);
  else
    return (0);
}
