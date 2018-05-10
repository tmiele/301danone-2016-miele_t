/*
** quick_sort.h for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src/sorts
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Thu Sep 26 10:04:59 2013 thomas miele
** Last update Fri Sep 27 15:08:01 2013 thomas miele
*/

#ifndef QUICK_SORT_H__
# define QUICK_SORT_H__

# include "../clock.h"
# include "../rand_tab.h"

t_clock quicksort(t_rand_tab *t);

void quick_sort_aux(t_rand_tab *t, int first, int last);
int partition(t_rand_tab *t, int first, int last, int pivotIndex);

#endif  /* !QUICK_SORT_H__*/
