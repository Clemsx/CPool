/*
** my_str_islower.c for my_str_islower in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 16:27:35 2016 clement xia
** Last update Tue Oct 11 16:28:16 2016 clement xia
*/

int	my_str_islower(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
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
