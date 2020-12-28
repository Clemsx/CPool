/*
** cat.c for cat in /home/clemsx/delivery/CPool_Day12
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 19 20:20:21 2016 clement xia
** Last update Wed Oct 19 20:27:02 2016 clement xia
*/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

int	main(int ac, char **av)
{
  int	fd;
  int	size;
  int	i;
  char	buffer[30000];

  i = 1;
  while (i < ac)
    {
      fd = open(av[i], O_RDONLY);
      if (fd == -1)
	{
	  write(2, "Error with open\n", 17);
	}
      else
	{
	  while (size = read(fd, buffer, 1) != 0)
	    {
	      write(1, buffer, size);
	    }
	}
      i++;
      close(fd);
    }
}
