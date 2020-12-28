/*
** my_strcat.c for my_strcat in /home/clemsx/delivery/CPool_Day07
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 10:38:36 2016 clement xia
** Last update Wed Oct 12 16:31:17 2016 clement xia
*/

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  i = 0;
  j = my_strlen(dest);
  while (src[i])
    {
      dest[ i + j ] = src[i];
      i++;
    }
  dest[ i + j ] = '\0';
  return (dest);
}
