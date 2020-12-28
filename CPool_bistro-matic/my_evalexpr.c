/*
** my_evalexpr.c for my_evalexpr.c in /home/aeki/CPool_evalexpr
** 
** Made by jimmy mathurin
** Login   <aeki@epitech.net>
** 
** Started on  Mon Oct 31 11:35:01 2016 jimmy mathurin
** Last update Sun Nov  6 22:25:54 2016 jimmy mathurin
*/

#include <my.h>
#include <stdlib.h>

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	is_ope(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    return (1);
  else
    return (0);
}

char	*my_operation(char *nb1, char *nb2, char c)
{
  if (c == '+')
    return (add_inf(nb1, nb2));
  if (c == '-')
    return (0);
  if (c == '*')
    return (mul_inf(nb1; nb2));
  if (c == '/')
    return (0);
  if (c == '%')
    return (0);
  return (0);
}

char	*my_int_to_str(int nb, char *str_sum)
{
  int	longueur;
  int	cible;
  int	nb2;
  int	len;
  int	i;

  longueur = 1;
  i = 0;
  len = 0;
  if(nb < 0)
    {
      nb = nb * (-1);
      str_sum[i] = '-';
      i++;
    }
  nb2 = nb;
  while (nb2 >= 10)
    {
      nb2 = nb2 / 10;
      longueur = longueur * 10;
      len++;
    }
  str_sum = malloc(sizeof(char) * len + 1);
  while (nb >= 10)
    {
      cible = nb / longueur;
      nb = nb % longueur;
      longueur = longueur / 10;
      str_sum[i] = cible + 48;
      i++;
    }
  str_sum[i] = nb + 48;
  str_sum[i + 1] = '\0';
  return (str_sum);
}

int	my_check_str(char *str)
{
  int	i;

  i = 0;
  if (is_ope(str[i]) == 1)
    i++;
    while (str[i] != '\0')
    {
      if (is_ope(str[i]) == 1)
	  return (1);
    }
    return (0);
}

int	my_check_par(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '(')
	{
	  return (1);
	}
      i++;
    }
  return (0);
}

int     my_len_nb(char *str, int indice, char sens)
{
  int	len;
  int	i;

  i = indice;
  len = 0;
  while (is_num(str[i]) == 0)
    i--;
  if (sens == 'g')
    {
      while (is_num(str[i]) == 1)
	{
	  len++;
	  i--;
	}
    }
  else
    if (sens == 'd')
      {
	while (is_num(str[i]) == 1)
	  {
	    len++;
	    i++;
	  }
      }
  return (len);
}

char    *my_nb_aft(char *str, int deb, char *nb2)
{
  int   i;
  int   j;

  i = deb;
  j = 0;
  nb2 = malloc(sizeof(char) * my_len_nb(str, i, 'd') + 2);
  while (is_num(str[i]) == 0)
    i++;
  while (is_num(str[i]) == 1)
    {
      nb2[j] = str[i];
      i++;
      j++;
    }
   nb2[j] = '\0';
  return (nb2);
}

char	*my_nb_bef(char *str, int deb, char *nb1)
{
  int	i;
  int	j;
  
  i = deb;
  j = 0;
  nb1 = malloc(sizeof(char) * my_len_nb(str, i, 'g') * 2);
  i--;
  while (is_num(str[i]) == 1 )
    {
      nb1[j] = str[i];
      i--;
      j++;
    }

  my_evil_str(nb1);
  return (nb1);
}

char	*my_tab_ope(char *str, int deb, int fin)
{
  int	i;
  int	len_ope;
  char	*tab;
  int	j;

  j = 0;
  i = deb;
  len_ope = 0;
  while (i < fin)
    {
      if (is_ope(str[i]))
	len_ope++;
      i++;
    }
  tab = malloc(sizeof(char) * len_ope);
  i = deb;
  while (i < fin)
    {
      if (is_ope(str[i]))
	{
	  tab[j] = str[i];
	  j++;
	}
      i++;
    }
  tab[i] = '\0';
  return (tab);
}

char    *my_new_expression(char *str, int deb_par, int fin_par, char *str_sum )
{
  char  *str_bef;
  char  *str_aft;
  char  *str_res;

  str_res = malloc(sizeof(char) * my_strlen(str) * 2);
  str_bef = malloc(sizeof(char) * my_strlen(str));
  str_aft = malloc(sizeof(char) * my_strlen(str));
  my_strncat(str_bef, str, deb_par);
  my_strcat(str_aft, &str[fin_par + 1]);
  my_strcat(str_res, str_bef);
  my_strcat(str_res, str_sum);
  my_strcat(str_res, str_aft);
  str = str_res;
  eval_expr(" ", " ", str, 1);
}



int     calcul_by_priority2(char *str, int deb_par, int fin_par)
{
  int	i;
  char  *nb1;
  char  *nb2;
  char  *somme;
  char  *tab_ope;
  int	j;
  int   bool;
  int   bef;
  int   aft;
  
  i = 0;
  tab_ope = my_tab_ope(str, deb_par, fin_par);
  bool = 0;
  j = deb_par;
  while (tab_ope[i] != '\0' && bool == 0)
    {
      if (tab_ope[i] == '+' || tab_ope[i] == '-')
	{
	  while (str[j] != '+' && str[j] != '-')
	    j++;
	  nb1 = my_nb_bef(str, j, nb1);
	  nb2 = my_nb_aft(str, j, nb2);
	  somme = malloc(sizeof(char) * (my_strlen(nb1) * my_strlen(nb2)));
	  somme = my_operation(nb1, nb2, tab_ope[i]);
	  i = deb_par;
	  while (str[i] != '+' && str[i] != '-')
	    i++;
	  bef = i - my_strlen(nb1);
	  aft = i + my_strlen(nb2);
	  if (str[bef - 1] == '(' && str[aft + 1] == ')')
	    {
	      aft++;
	      bef--;
	    }
	  bool = 1;
	}
      i++;
    }
  if (bool == 1)
    my_new_expression(str, deb_par, fin_par, somme);
  else
    return (1);
}

int	calcul_by_priority1(char *str, int deb_par, int fin_par)
{
  int	i;
  char	*nb1;
  char	*nb2;
  char	*somme;
  char	*tab_ope;
  int	j;
  int	bool;
  int	bef;
  int	aft;

  bool = 0;
  j = deb_par;
  tab_ope = my_tab_ope(str, deb_par, fin_par);
  i = 0;
  while (tab_ope[i] != '\0' && bool == 0)
    {
      if (tab_ope[i] == '/' || tab_ope[i] == '*' || tab_ope[i] == '%')
	{
	  while (str[j] != '/' && str[j] != '*' && str[j] != '%')
	    j++;
	  nb1 = my_nb_bef(str, j, nb1);
	  nb2 = my_nb_aft(str, j, nb2);
	  somme = malloc(sizeof(char) * (my_strlen(nb1) * my_strlen(nb2)));
	  somme = my_operation(nb1, nb2, tab_ope[i]);
	  i = deb_par;
	  while (str[i] != '/' && str[i] != '*' && str[i] != '%')
	    i++;
	  bef = i - my_strlen(nb1);
	  aft = i + my_strlen(nb2);
	  if (str[bef - 1] == '(' && str[aft + 1] == ')')
	    {
	      aft++;
	      bef--;
	    }
	  bool = 1;
	}
      i++;
    }

  if (bool == 1)
    my_new_expression(str, bef, aft, somme);
  else
    calcul_by_priority2(str, deb_par, fin_par);
}

int     my_fin_par(char *str)
{
  while (str[i] != '(')
    i++;
  if (str[i] == '(')
    {
      deb_par = i;
      while (str[i] != ')')
	{
	  if (str[i] == '(')
	    deb_par = i;
	  i++;
	}
      fin_par = i;
      return (fin_par);
    }
}

int	my_deb_par(char *str)
{
  while (str[i] != '(')
    i++;
  if (str[i] == '(')
    {
      deb_par = i;
      while (str[i] != ')')
	{
	  if (str[i] == '(')
	    deb_par = i;
	  i++;
	}
      fin_par = i;
      return (deb_par);
    }
}

int	eval_expr(char *base, char *operators, char *str, int size)
{
  int	i;
  int	deb_par;
  int	fin_par;
  char	*nb1;
  char	*nb2;
  int	check;

  check = 0;
  deb_par = 0;
  fin_par = my_strlen(str) - 1;
  my_strdup(str);
  i = 0;
  if (my_check_par(str) == 1)
    {
      deb_par = my_deb_par(str);
      fin_par = my_fin_par(str);
      calcul_by_priority1(str, deb_par, fin_par);
    }
  else
    {
      check = calcul_by_priority1(str, deb_par, fin_par);
      if (check == 1)
	return (str);
    }
}
