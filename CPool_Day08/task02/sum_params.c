/*
** sum_params.c for sum_params in /home/clemsx/delivery/CPool_Day08/task02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 14:23:35 2016 clement xia
** Last update Thu Oct 13 09:37:31 2016 clement xia
*/

#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  char	*r;
  int	size;
  int	i;

  size = 0;
  i = 0;
  while (i++ < argc)
    {
      size = size + my_strlen(argv[i - 1]) + 1;
      r = malloc(sizeof(char) * size);
      i = 0;
      while (i++ < argc)
	{
	  my_strcat(r, argv[i - 1]);
	  my_strcat(r, "\n");
	}
    }
  return (r);
}

int	main(int argc, char **argv)
{
  my_putstr(sum_params(argc, argv));
  return (EXIT_SUCCESS);
}
