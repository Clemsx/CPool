/*
** rush2.c for rush2 in /home/julien_wilmet/CPool_rush2
** 
** Made by Julien Wilmet & Clement Xia
** Login   <julien_wilmet@epitech.net>
** 
** Started on  Sat Oct 15 11:21:22 2016 Julien Wilmet
** Last update Sat Oct 15 20:10:23 2016 Julien Wilmet
*/

#include "my.h"

int	check_flag(char *str)
{
  if (my_strcmp("-c", str) == 0)
    return (1);
  if (my_strcmp("-f", str) == 0)
    return (2);
  my_putstr("Error : invalid flag! Flags : '-c' '-f'\n", 2);
  return (84);
}

int	check_luhn(char *str)
{
  int	str_len;
  int	i;
  int	ret;
  int	tmp;

  if (!my_str_isnum(str))
    return (-1);
  i = 1;
  str_len = my_strlen(str);
  ret = 0;
  while (str_len - i >= 0)
    {
      tmp = (str[str_len - i] - 48);
      if (i % 2 == 0)
	{
	  tmp = tmp * 2;
	  if (tmp >= 10)
	    tmp = tmp - 9;
	}
      ret = ret + tmp;
      i = i + 1;
    }
  return (ret);
}

int	find_luhn(char *str)
{
  if (check_luhn(str) == -1)
    return (84);
  return ((check_luhn(my_strcat(str, "0")) * 9) % 10);
}

void	flag_c(int tmp)
{
  if (tmp % 10 != 0 && tmp > 0)
    {
      my_putstr("KO\n", 1);
      return ;
    }
  if (tmp % 10 == 0)
    {
      my_putstr("OK\n", 1);
      return ;
    }
  my_putstr("Error : enter a number\n", 2);
}

int	main(int ac, char **av)
{
  int	tmp;
  int	flag;
  int	find;

  if (ac != 3)
    {
      my_putstr("Usage : ./rush2 flag \"Luhn code\"\n", 2);
      return (84);
    }
  flag = check_flag(av[1]);
  tmp = check_luhn(av[2]);
  if (flag == 1)
    {
      flag_c(tmp);
    }
  find = find_luhn(av[2]);
  if (flag == 2 && find != 84)
    {
      my_put_nbr(find);
      my_putchar('\n');
    }
  if (flag == 84 || find == 84 || tmp == -1)
    return (84);
  return (0);
}
