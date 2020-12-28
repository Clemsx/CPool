/*
** rush3.h for rush3.h in /home/Liloue/CPool/Rush3/CPool_rush3
** 
** Made by Laetitia POULET de GRIMOUARD
** Login   <Liloue@epitech.net>
** 
** Started on  Sat Oct 29 18:49:49 2016 Laetitia POULET de GRIMOUARD
** Last update Sat Oct 29 21:27:10 2016 Laetitia POULET de GRIMOUARD
*/

#ifndef RUSH3_H_
# define RUSH3_H_

#define BUFF_SIZE (4096)

char	first_carac(char *buff);
char	last_carac(char *buff);
int	count_a(char *buff);
void	my_putchar(char c);
void	my_putstr(char *str);
void	display_rush(char rush, int nb_line, int nb_col);
void	display(char rush, int nb_line, int nb_col);
int	count_line(char *buff);
int	count_col(char *buff);
char	find_rush(char *buff);
void	rush3(char *buff);
int	my_put_nbr(int nb);

#endif /* !RUSH3_H_ */
