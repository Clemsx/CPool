/*
** my_str_isalpha.c for my_str_isalpha in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 15:43:20 2016 clement xia
** Last update Wed Oct 12 18:51:29 2016 clement xia
*/

int	my_str_isalpha(char *str)
{
  int	i;
  int	j;
  int	cp;

  i = 0;
  j = 0;
  cp = 0;
  while(str[j] != '\0')
    {
      j = j + 1;
    }
  while (str[i] != '\0')
    {
      if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
