/*
** my_strcmp.c for my_strcmp in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Tue Oct 11 13:06:24 2016 clement xia
** Last update Wed Oct 12 18:50:32 2016 clement xia
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;
  int   res;
  int   moins;

  moins = -1;
  i = 0;
  res = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	{
	  res = s1[i] - s2[i];
	  s1[i] = '\0';
	  s2[i] = '\0';
	}
      i++;
    }
  if (res > 0 )
    return (1);
  if (res < 0)
    return (-1);
  if (res == 0)
    return (0);
}
