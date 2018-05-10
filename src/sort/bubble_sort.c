/*
** bubble_sort.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src/sorts
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Thu Sep 26 09:58:54 2013 thomas miele
** Last update Fri Sep 27 14:38:07 2013 thomas miele
*/

#include "bubble_sort.h"

t_clock bubblesort(t_rand_tab *t)
{
  t_clock start;
  t_clock finish;

  int loop = 1;
  int i = 0;

  start = get_current_time();
  while (loop)
    {
      loop = 0;
      for (i = 0; i < t->size - 1; ++i)
	{
	  if (t->tab[i] > t->tab[i + 1])
	    {
	      my_swap(&t->tab[i], &t->tab[i + 1]);
	      loop = 1;
	    }
	}
    }
  finish = get_current_time() - start;
  return finish;
}
