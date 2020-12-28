/*
** my_rev_params.c for my_rev_params in /home/clemsx/delivery/CPool_Day07/task05
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 12:15:52 2016 clement xia
** Last update Wed Oct 12 21:13:47 2016 clement xia
*/

int	main(int argc, char **argv)
{
  int	i;

  i = argc;
  while (i != 0)
    {
      i--;
      my_putstr(argv[i]);
      my_putchar('\n');
    }
}
