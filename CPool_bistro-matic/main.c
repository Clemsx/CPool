/*
** main.c for main in /home/clemsx/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 25 13:14:16 2016 clement xia
** Last update Sun Nov  6 16:57:10 2016 clement xia
*/

#include <stdio.h>

char	*sub_inf(char *nb1, char *nb2);
char	*add_inf(char *nb1, char *nb2);
char	*div_inf(char *nb1, char *nb2);
char	my_putchar(char c);
int	my_strlen(char *str);
void	v_result(char *str, int lenght);

int	rm_minus(char *argv)
{
  int	i;
  int	bool;

  i = 0;
  bool = 0;
  if (argv[i] == '-')
    {
      bool = 1;
      while (argv[i] != '\0')
	{
	  argv[i] = argv[i + 1];
	  i++;
	}
    }
  return (bool);
}

void	add_minus_minus(char *argv1, char *argv2)
{
  rm_minus(argv1);
  rm_minus(argv2);
  my_putchar('-');
  if (my_strlen(argv1) >= my_strlen(argv2))
    v_result(add_inf(argv1, argv2), my_strlen(argv1) + 1);
  else
    v_result(add_inf(argv1, argv2), my_strlen(argv2) + 1);
}

void	sub_minus(char *argv1, char *argv2)
{
  int	bool1;
  int	bool2;
  
  bool1 = rm_minus(argv1);
  bool2 = rm_minus(argv2);
  if ((my_strlen(argv1) >= my_strlen(argv2)))
    {
      if (bool1 == 1)
	my_putchar('-');
      v_result(sub_inf(argv1, argv2), my_strlen(argv1));
    }
  else
    {
      if (bool2 == 1)
	my_putchar('-');
      v_result(sub_inf(argv2, argv1), my_strlen(argv2));
    }
}

int     main(int argc, char **argv)
{
  if (argc > 2)
    {
      
      if (argv[1][0] == '-' && argv[2][0] == '-')
	add_minus_minus(argv[1], argv[2]);
      else if (argv[1][0] == '-' || argv[2][0] == '-')
	sub_minus(argv[1], argv[2]);
      else
	{
	  if (my_strlen(argv[1]) > my_strlen(argv[2]))
	    v_result(add_inf(argv[1], argv[2]), my_strlen(argv[1]) + 1);
	  else
	    v_result(add_inf(argv[1], argv[2]), my_strlen(argv[2]) + 1);
	}
      //v_result(div_inf(argv[1], argv[2]), my_strlen(argv[1]));
    }
  my_putchar('\n');
  return (0);
}
