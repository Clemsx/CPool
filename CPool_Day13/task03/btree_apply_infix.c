/*
** btree_apply_infix.c for btree_apply_infix in /home/clemsx/delivery/CPool_Day13/task03
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 20 10:29:21 2016 clement xia
** Last update Thu Oct 20 15:17:03 2016 clement xia
*/

#include <stdlib.h>
#include "../mytree.h"

void	btree_apply_infix(t_btree *root, int (applyf) (void *))
{
  if (!root)
    {
      if (root->left)
	{
	  btree_apply_infix(root->left, applyf);
	}
      applyf(root->item);
      if (root->right)
	{
	  btree_apply_infix(root->right, applyf);
	}
    }
}
