/*
** my_str_isnum.c for my_str_isnum in /home/julien_wilmet/delivery
**
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
**
** Started on  Mon Oct 10 14:10:38 2016 Julien Wilmet
** Last update Sat Oct 15 13:48:08 2016 Julien Wilmet
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (!str[0])
    return (0);
  while (str[i])
    {
      if (str[i] < 48 || str[i] > 57)
	return (0);
      i = i + 1;
    }
  return (1);
}
