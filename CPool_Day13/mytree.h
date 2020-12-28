/*
** mytree.h for mytree in /home/clemsx/delivery/CPool_Day13
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 20 09:34:58 2016 clement xia
** Last update Thu Oct 20 09:35:55 2016 clement xia
*/

typedef struct	s_btree
{
  struct s_btree	*left;
  struct s_btree	*right;
  void	*item;
}	t_btree;
