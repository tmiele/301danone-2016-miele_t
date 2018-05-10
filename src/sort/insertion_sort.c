/*
** insertion_sort.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src/sorts
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Thu Sep 26 10:18:01 2013 thomas miele
** Last update Fri Sep 27 11:21:52 2013 thomas miele
*/

#include "insertion_sort.h"

t_clock insertionsort(t_rand_tab *t)
{
  t_clock start;
  t_clock finish;

  int i = 0;
  int j = 0;
  int x = 0;

  start = get_current_time();

  for (i = 1; i < t->size; ++i)
    {
      x = t->tab[i];
      for (j = i; j > 0 && t->tab[j - 1] > x; --j)
	{
	  t->tab[j] = t->tab[j - 1];
	}
      t->tab[j] = x;
    }

  finish = get_current_time() - start;
  return finish;
}
