/*
** my_strcmp.c for my_strcmp in /home/julien_wilmet/delivery
**
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
**
** Started on  Mon Oct 10 12:41:01 2016 Julien Wilmet
** Last update Tue Oct 11 19:41:14 2016 Julien Wilmet
*/

int	my_strlen(char *str);

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i = i + 1;
    }
  if (my_strlen(s1) < my_strlen(s2))
    return (-1);
  else if (my_strlen(s2) < my_strlen(s1))
    return (1);
  return (0);
}
