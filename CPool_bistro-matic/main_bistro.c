/*
** main_bistro.c for bistro-matic in /home/Lookiis/Perso/CLEMX/CPool_infinadd
** 
** Made by Lin David
** Login   <Lookiis@epitech.net>
** 
** Started on  Fri Nov  4 16:44:16 2016 Lin David
** Last update Sun Nov  6 22:05:30 2016 jimmy mathurin
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistro-matic.h"
#include "../include/my.h"

static void	my_putstr_err(char *s);
static char	*get_expr(unsigned int size);
static void     check_base(char *b);
static void     check_ops(char *ops);
void		display_info(char *str);

int	main(int ac, char **av)
{
  char		*expr;
  unsigned int	size;
  
  if (ac  !=  4)
    {
      my_putstr_err("Usage : ");
      my_putstr_err(av[0]);
      my_putstr_err(" base ops \"()+-*/%\" exp_len\n");
      return (EXIT_USAGE);
    }
  check_base(av[1]);
  check_ops(av[2]);
  size = my_atoi(av[3]);
  expr = get_expr(size);
  my_putstr(eval_expr(av[1], av[2], expr, size));
  return (EXIT_SUCCESS);
}

static void	check_base(char *b)
{
  if (my_strlen(b) < 2)
    {
      my_putstr_err(SYNTAX_ERROR_MSG);
      exit(EXIT_BASE);
    }
}

static void	check_ops(char *ops)
{
  if (my_strlen(ops) != 7)
    {
      my_putstr_err(SYNTAX_ERROR_MSG);
      exit(EXIT_OPS);
    }
}

static char	*get_expr(unsigned int size)
{
  char	*expr;
  
  if (size <= 0)
    {
      my_putstr_err(SYNTAX_ERROR_MSG);
      exit(EXIT_SIZE_NEG);
    }
  expr = malloc(size + 1);
  if (expr == 0)
    {
      my_putstr_err(ERROR_MSG);
      exit(EXIT_MALLOC);
    }
  if (read(0, expr, size) != size)
    {
      my_putstr_err(ERROR_MSG);
      exit(EXIT_READ);
    }
  expr[size] = 0;
  return (expr);
}

static void my_putstr_err(char *s)
{
  write(2, s, my_strlen(s));
}
