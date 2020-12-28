/*
** infin_sub.c for infin_sub in /home/clemsx/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 25 13:16:34 2016 clement xia
** Last update Sat Nov  5 23:59:46 2016 clement xia
*/

#include <stdlib.h>
#include <stdio.h>

void	to_nb(char *str, int lenght);
void	v_result(char *str, int lenght);
char	*allocation(int lenght1, int lenght2);
int	lenght_str(int lenght1, int lenght2);
int	my_strlen(char *str);
int	my_putchar(char c);

char	*ini_var(char *str, int len)
{
  int	i;

  i = 0;
  while(i < len)
    {
      str[i] = 0;
      i++;
    }
  str[i] = '\0';
  return (str);
}

char	*sub_inf(char *nb1, char *nb2)
{
  char	*str;
  int	l1;
  int	l2;
  int	i;

  l1 = my_strlen(nb1);
  l2 = my_strlen(nb2);
  str = allocation(l1, l2);
  str = ini_var(str, l1);
  to_nb(nb1, l1);
  to_nb(nb2, l2);
  i = l1 - 1;
  l2--;
  while (i >= 0)
    {
      str[i] += (l2 < 0 ? 0 : nb2[l2]);
      if (nb1[i] < str[i])
	{
	  nb1[i] += 10;
	  str[i - 1] = 1;
	}
      str[i] = nb1[i] - str[i];
      i--;
      l2--;
    }
  return (str);
}
