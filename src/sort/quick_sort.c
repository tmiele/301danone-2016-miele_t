/*
** quick_sort.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src/sorts
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Thu Sep 26 10:05:59 2013 thomas miele
** Last update Fri Sep 27 15:08:13 2013 thomas miele
*/

#include <stdio.h>
#include "quick_sort.h"

t_clock quicksort(t_rand_tab *t)
{
  t_clock start;
  t_clock finish;

  start = get_current_time();
  quick_sort_aux(t, 0, t->size);
  finish = get_current_time() - start;
  return finish;
}

void quick_sort_aux(t_rand_tab *t, int first, int last)
{
  int pivot_idx = 0;
  int new_pivot_idx = 0;

  if (first < last)
    {
      pivot_idx = first + 1;
      new_pivot_idx = partition(t, first, last, pivot_idx);
      quick_sort_aux(t, first, new_pivot_idx - 1);
      quick_sort_aux(t, new_pivot_idx + 1, last);
    }
}

int partition(t_rand_tab *t, int first, int last, int pivot_idx)
{
  int pivot_val = 0;
  int store_idx = 0;
  int i = 0;

  pivot_val = t->tab[pivot_idx];
  my_swap(&t->tab[pivot_idx], &t->tab[last]);
  store_idx = first;
  for (i = first; i < last; ++i)
    {
      if (t->tab[i] < pivot_val)
	{
	  my_swap(&t->tab[i], &t->tab[store_idx]);
	  ++store_idx;
	}
    }
  my_swap(&t->tab[store_idx], &t->tab[last]);
  return (store_idx);
}
