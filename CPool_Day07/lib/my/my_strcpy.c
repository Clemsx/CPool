/*
** my_strcpy.c for my_strcpy in /run/media/clemsx/34B2-12F4
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 07:52:29 2016 clement xia
** Last update Wed Oct 12 13:02:08 2016 clement xia
*/

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
