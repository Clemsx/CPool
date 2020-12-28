/*
** my_putstr.c for my_putstr in /home/julien_wilmet/delivery
** 
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
** 
** Started on  Thu Oct  6 09:19:33 2016 Julien Wilmet
** Last update Sat Oct 15 13:31:34 2016 Julien Wilmet
*/

#include <unistd.h>

int	my_strlen(char *str);

int	my_putstr(char *str, int sortie)
{
  write(sortie, str, my_strlen(str));
  return (0);
}
