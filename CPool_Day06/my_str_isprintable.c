/*
** my_str_isprintable.c for my_str_isprintable in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 16:44:39 2016 clement xia
** Last update Tue Oct 11 16:45:12 2016 clement xia
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	{
	  j++;
	}
      i++;
    }
  if ( i == j )
    return (1);
  else
    return (0);
}



