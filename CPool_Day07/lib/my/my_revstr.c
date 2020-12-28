/*
** myrevstr.c for my_revstr in /run/media/clemsx/34B2-12F4
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 07:51:06 2016 clement xia
** Last update Wed Oct 12 18:46:55 2016 clement xia
*/

char    *my_revstr(char *str)
{
  int	a;
  char	b;
  int	i;

  i = 0;
  a = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  i--;
  while (a <= i)
    {
      b = str[a];
      str[a] = str[i];
      str[i] = b;
      a++;
      i--;
    }
  return (str);
}
