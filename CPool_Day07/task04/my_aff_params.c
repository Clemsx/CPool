/*
** my_aff_params.c for my_aff_params in /home/clemsx/delivery/CPool_Day07/task04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 11:50:48 2016 clement xia
** Last update Wed Oct 12 10:07:34 2016 clement xia
*/

void	main(int argc, char **argv)
{
  int	i;

  i = 0;
  while (argv[i])
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
