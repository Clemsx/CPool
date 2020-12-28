/*
** infin_add.c for infin_add in /home/clemsx/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 24 08:58:10 2016 clement xia
** Last update Sun Nov  6 16:56:44 2016 clement xia
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "include/my.h"

int	check_lenght_add(char *str, char *nb1, char *nb2, int l1, int l2, int i);
char	*ini_var(char *str, int len);

void	to_nb(char *str, int lenght)
{
  int	i;

  i = 0;
  while (i < lenght)
    {
      str[i] = str[i] - 48;
      i++;
    }
}

void	v_result(char *str, int lenght)
{
  int	i;
  int	j;
  
  i = 0;
  j = 0;
  while (i < lenght)
    {
      if (j == 1 || str[i] != 0 || i + 1 == lenght)
	{
	  my_putchar(str[i] + 48);
	  j = 1;
	}
      i++;
    }
  free(str);
}

char	*allocation(int lenght1, int lenght2)
{
  char	*str;

  str = NULL;
  if (lenght1 >= lenght2)
    str = malloc(sizeof(char) * lenght1 + 2);
  else
    str = malloc(sizeof(char) * lenght2 + 2);
  if (str != NULL)
    return (str);
  else
    return (0);
}

int	lenght_str(int lenght1, int lenght2)
{
  int	i;

  if (lenght1 >= lenght2)
    i = lenght1;
  else
    i = lenght2;
  return (i);
}

char	*add_inf(char *nb1, char *nb2)
{
  char	*str;
  int	i;
  int	l1;
  int	l2;

  l1 = my_strlen(nb1);
  l2 = my_strlen(nb2);
  str = allocation(l1, l2);
  str = ini_var(str, lenght_str(l1, l2));
  to_nb(nb1, l1);
  to_nb(nb2, l2);
  i = lenght_str(l1, l2);
  l1--;
  l2--;
  while (i > 0)
    {
      check_lenght_add(str, nb1, nb2, l1, l2, i);
      str[i - 1] = str[i] / 10;
      str[i] = str[i] % 10;
      i--;
      l1--;
      l2--;
    }
  return (str);
}
