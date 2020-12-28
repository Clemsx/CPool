/*
** my_strstr.c for my_strstr in /home/clemsx/delivery/CPool_Day06
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 10 16:09:01 2016 clement xia
** Last update Wed Oct 12 18:55:46 2016 clement xia
*/

char    *my_strstr(char *str, char *to_find)
{
  int   i;
  int   j;
  int   cp;

  cp = my_strlen(to_find);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[0])
	{
	  j = 0;
	  while (to_find[j] != '\0')
	    {
	      j++;
	      if (cp == j)
		return (&str[i]);
	    }
	}
      i++;
    }
}
