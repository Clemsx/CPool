/*
** my_show_wordtab.c for my_show_wordtab in /home/clemsx/delivery/CPool_Day08/task03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Wed Oct 12 15:44:29 2016 clement xia
** Last update Wed Oct 12 17:01:30 2016 clement xia
*/

int	my_show_wordtab(char **tab)
{
  int	i;
  int	j;
  
  i = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  my_putchar(tab[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}
