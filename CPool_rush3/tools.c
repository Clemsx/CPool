/*
** tool.c for tools.c in /home/Liloue/CPool/Rush3/CPool_rush3
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Sat Oct 29 17:57:30 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:56:30 2016 Laetitia POULET de GRIMOUARD
*/

#include <unistd.h>

char	first_carac(char *buff)
{
  char	rush;

  if (buff[0] == 'o')
    rush = '1';
  else if (buff[0] == '/' || buff[0] == '*')
    rush = '2';
  else if (buff[0] == 'B')
    rush = '6';
  else if (buff[0] == 'A')
    rush = '0';
  else
    rush = 0;
  return (rush);
}

char	last_carac(char *buff)
{
  char	rush;
  int	i;

  i = 0;
  while (buff[i + 2] != 0)
    i++;
  if (buff[i] == 'C')
    rush = '4';
  else if (buff[i] == 'A')
    rush = '5';
  else
    rush = 0;
  return (rush);
}

int	count_a(char *buff)
{
  int	i;
  int	nb_a;

  i = 0;
  while (buff[i] != '\n')
    {
      if (buff[i] == 'A')
	nb_a++;
      i++;
    }
  return (nb_a);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
