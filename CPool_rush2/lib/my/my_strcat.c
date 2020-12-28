/*
** my_strcat.c for my_strcat in /home/julien_wilmet/Archives/lib/my
** 
** Made by Julien Wilmet
** Login   <julien_wilmet@epitech.net>
** 
** Started on  Tue Oct 11 08:30:00 2016 Julien Wilmet
** Last update Tue Oct 11 09:16:45 2016 Julien Wilmet
*/
int	my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	dest_size;
  int	i;

  i = 0;
  dest_size = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[dest_size + i] = src[i];
      i = i + 1;
    }
  dest[dest_size + i] = '\0';
  return (dest);
}
