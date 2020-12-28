/*
** my_str_isupper.c for my_str_isupper in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 16:31:24 2016 clement xia
** Last update Tue Oct 11 16:32:59 2016 clement xia
*/

int	my_str_isupper(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
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
