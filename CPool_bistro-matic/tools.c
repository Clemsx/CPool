/*
** tools.c for tools in /home/clemsx/Pool/delivery/CPool_infinadd
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Mon Oct 31 14:38:17 2016 clement xia
** Last update Tue Nov  1 15:43:57 2016 clement xia
*/

void	check_lenght_add(char *str, char *nb1, char *nb2, int l1, int l2, int i)
{
  if (l1 > l2)
    {
      if (l2 < 0)
	str[i] += nb1[l1] + 0;
      else
	str[i] += nb1[l1] + nb2[l2];
    }
  else
    {
      if (l1 < 0)
	str[i] += nb2[l2] + 0;
      else
	str[i] += nb2[l2] + nb1[l1];
    } 
}
