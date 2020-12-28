/*
** main.c for main in /home/clemsx/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 25 13:14:16 2016 clement xia
** Last update Wed Oct 26 13:28:16 2016 clement xia
*/

void	sub_inf(char *nb1, char *nb2);
void	add_inf(char *nb1, char *nb2);
char	my_putchar(char c);

int     main(int argc, char **argv)
{
  add_inf(argv[1], argv[2]);
  my_putchar('\n');
  return (0);
}
