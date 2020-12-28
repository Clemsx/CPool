/*
** main.c for main.c in /home/Liloue/CPool/Rush3/CPool_rush3
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Sat Oct 29 17:27:14 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:53:17 2016 Laetitia POULET de GRIMOUARD
*/

#include <unistd.h>
#include "rush3.h"

int	main()
{
  char	buff[BUFF_SIZE + 1];
  int	len;
  int	offset;

  offset = 0;
  while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
      offset = offset + len;
  if (offset < BUFF_SIZE)
    {
      buff[BUFF_SIZE] = '\0';
      rush3(buff);
    }
  else
    my_putstr("none\n");
  if (len < 0)
    return (84);
  return (0);
}
