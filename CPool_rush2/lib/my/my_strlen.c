/*
** my_strlen.c for my_strlen in /home/julien_wilmet/delivery
** 
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
** 
** Started on  Thu Oct  6 09:26:29 2016 Julien Wilmet
** Last update Thu Oct  6 09:31:13 2016 Julien Wilmet
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
