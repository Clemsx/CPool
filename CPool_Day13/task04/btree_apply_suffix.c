/*
** btree_apply_suffix.c for btree_apply_suffix in /home/clemsx/delivery/CPool_Day13/task04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 20 10:33:05 2016 clement xia
** Last update Thu Oct 20 15:19:16 2016 clement xia
*/

#include <stdlib.h>
#include "../mytree.h"

void	btree_apply_suffix(t_btree *root, int (*applyf) (void *))
{
  if (!root)
    {
      if (root->left)
	{
	  btree_apply_suffix(root->left, applyf);
	}
      if (root->right)
	{
	  btree_apply_suffix(root->right, applyf);
	}
      applyf(root->item);
    }
}
