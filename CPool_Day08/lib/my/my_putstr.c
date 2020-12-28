/*
** my_putstr.c for my_putstr in /home/clemsx/delivery/CPool_Day04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct  6 12:01:49 2016 clement xia
** Last update Thu Oct  6 12:50:32 2016 clement xia
*/

int	my_putstr(char	*str)
{
  int	i;

  i = 0;

  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
