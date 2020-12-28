/*
 ** infin_mul.c for infin_mul in /home/Lookiis/Perso/CPool_infinadd
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Mon Oct 31 15:50:49 2016 Lin David
** Last update Sun Nov  6 16:46:03 2016 clement xia
*/

#include "./include/my.h"
#include <stdlib.h>
#include <fcntl.h>

int	my_putchar(char c);
int	my_strlen(char *str);

void    v_result2(char *str, int lenght)
{
  int   l;
  int   j;
  
  l = 0;
  j = 0;
  while (l <= lenght)
    {
      if (j == 1 || str[l] != 0 || l + 1 == lenght)
	{
	  my_putchar(str[l] + 48);
	  j = 1;
	}
      l++;
    }
}

void	initstr(char *str, int lenght)
{
  int	i;

  i = 0;
  while (i <= lenght)
    {
      str[i] = '0';
      i++;
    }
  str[i] = '\0';
}

char	*mul_inf(char *nb1, char *nb2)
{
  char	*str;
  int	l1;
  int	l2;
  int	mult;

  l1 = my_strlen(nb1) - 1;
  l2 = my_strlen(nb2) - 1;
  str = malloc(sizeof(char) * (my_strlen(nb1) + my_strlen(nb2) + 1));
  initstr(str, l1 + l2 + 1);
  while (l1 >= 0)
    {
      l2 = my_strlen(nb2) - 1;
      while (l2 >= 0)
	{
	  mult = ((nb1[l1] - '0') * (nb2[l2] - '0'));
	  str[l1 + l2] = str[l1 + l2] + ((str[l1 + l2 + 1] + mult - '0') / 10);
	  str[l1 + l2 + 1] = ((str[l1 + l2 + 1] + mult - '0') % 10) + '0';
	  l2 = l2 - 1;
	}
      l1 = l1 - 1;
    }
  return (str);
}
