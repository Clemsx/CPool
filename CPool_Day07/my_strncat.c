/*
** my_strncat.c for my_strncat in /home/clemsx/delivery/CPool_Day07
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 10:56:53 2016 clement xia
** Last update Wed Oct 12 16:31:53 2016 clement xia
*/

char    *my_strncat(char *dest, char *src, int nb)
{
  int   i;
  int   j;
  char *p;

  i = 0;
  p = &dest[0];
  j = my_strlen(dest);
  while (src[i] != '\0' && i < nb )
    {
      p[j + i] = src[i];
      i++;
    }
  p[j + i] = '\0';
  return (dest);
}
