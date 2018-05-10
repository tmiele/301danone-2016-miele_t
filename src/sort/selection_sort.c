/*
** selection_sort.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src/sorts
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Thu Sep 26 10:09:46 2013 thomas miele
** Last update Fri Sep 27 14:38:53 2013 thomas miele
*/

#include "selection_sort.h"

t_clock selectionsort(t_rand_tab *t)
{
  t_clock start;
  t_clock finish;
  int i = 0;
  int j = 0;
  int min = 0;

  start = get_current_time();
  for (i = 0; i < t->size; ++i)
    {
      min = i;
      for (j = i + 1; j < t->size; ++j)
	{
	  if (t->tab[j] < t->tab[min])
	    {
	      min = j;
	    }
	}
      if (min != i)
	{
	  my_swap(&t->tab[i], &t->tab[min]);
	}
    }
  finish = get_current_time() - start;
  return finish;
}
