/*
** btree_create_node.c for btree_create_node in /home/clemsx/delivery/CPool_Day13/task01
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct 20 10:16:20 2016 clement xia
** Last update Thu Oct 20 15:13:52 2016 clement xia
*/

#include <stdlib.h>
#include "../mytree.h"

t_btree	*btree_create_node(void *item)
{
  t_btree	*tree;

  tree = NULL;
  tree = (t_btree*) malloc(sizeof(t_btree));
  if (tree)
    {
      tree->item = item;
      tree->left = 0;
      tree->right = 0;
    }
  return (tree);
}
