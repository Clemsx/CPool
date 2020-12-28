/*
** btree_apply_prefix.c for btree_apply_prefix in /home/clemsx/delivery/CPool_Day13/task02
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 20 10:22:07 2016 clement xia
** Last update Thu Oct 20 15:16:06 2016 clement xia
*/

#include <stdlib.h>
#include "../mytree.h"

void	btree_apply_prefix(t_btree *root, int (*applyf) (void *))
{
  while (!root)
    {
      applyf(root->item);
      if (root->left)
	{
	  btree_apply_prefix(root->left, applyf);
	}
      if (root->right)
	{
	  btree_apply_prefix(root->right, applyf);
	}
    }
}
