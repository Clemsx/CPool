/*
** my_strcapitalize.c for my_strcapitalize in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 15:22:48 2016 clement xia
** Last update Wed Oct 12 18:49:47 2016 clement xia
*/

char    *my_strcapitalize(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 123 && j == 0)
	{
	  str[i] = str[i] - 32;
	  j = 1;
	}
      else
	{
	  if (str[i] >= 65 && str[i] <= 92 && j == 1 || str[i] >= 48 && str[i] <= 57)
	    {
	      if (str[i] > 64 && str[i] < 91)
		str[i] = str[i] + 32;
	      j = 1;
	    }
	  else
	    {
	      if (!(str[i] > 96 && str[i] < 123) && !(str[i] > 64 && str[i] < 91))
		j = 0;
	    }
	}
      i++;
    }
  return (str);
}
