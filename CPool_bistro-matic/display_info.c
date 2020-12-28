/*
** displayinfo.c for display info in /home/Lookiis/Perso/CLEMX/CPool_infinadd
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Fri Nov  4 13:39:06 2016 Lin David
** Last update Sat Nov  5 17:08:48 2016 clement xia
*/

#include <unistd.h>

void	my_putstr_info(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      i = i + 1;
    }
}

void	display_info(char **argv)
{
  if (argv[1][0] == '-')
    {
      if (argv[1][1] == 'h')
	{
	  my_putstr_info("USAGE\n\t   ./calc base operators size_read\n\n");
	  my_putstr_info("DESCRIPTION\n");
	  my_putstr_info("\t   base\t      all the symbols of the base\n");
	  my_putstr_info("\t   operators  the symbols for the parentheses and the 5 operators\n");
	  my_putstr_info("\t   size_read  number of characters to be read\n");
	}
    }
}
