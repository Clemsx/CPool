/*
** my_putchar.c for my_putchar in /run/media/clemsx/34B2-12F4/julien3
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 08:01:02 2016 clement xia
** Last update Wed Oct 12 18:44:12 2016 clement xia
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
