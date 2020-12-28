/*
** my_strlowcase.c for my_strlowcase in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 16:16:21 2016 clement xia
** Last update Tue Oct 11 16:17:16 2016 clement xia
*/

int     *my_strlowcase(char *str)
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
