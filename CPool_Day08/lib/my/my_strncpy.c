/*
** my_strncpy.c for my_strncpy* in /run/media/clemsx/34B2-12F4
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 07:53:23 2016 clement xia
** Last update Wed Oct 12 18:54:54 2016 clement xia
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  
  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
