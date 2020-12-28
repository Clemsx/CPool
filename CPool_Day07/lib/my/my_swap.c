/*
** my_swap.c for my_swap in /home/clemsx/delivery/CPool_Day04
** 
** Made by clement xia
** Login   <clemsx@epitech.net>
** 
** Started on  Thu Oct  6 09:43:01 2016 clement xia
** Last update Thu Oct  6 11:59:26 2016 clement xia
*/

int	my_swap(int *a, int *b)
{  
  int	x;
  
  x = *a;
  *a = *b;
  *b = x;
}
