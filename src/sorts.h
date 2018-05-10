/*
** sorts.h for  in /home/miele_t//WorkingDraft/projects/301danone/src
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Mon Sep 23 13:13:20 2013 thomas miele
** Last update Fri Sep 27 11:18:31 2013 thomas miele
*/

#ifndef SORTS_H__
# define SORTS_H__

# include "rand_tab.h"
# include "clock.h"

# include "sort/quick_sort.h"
# include "sort/merge_sort.h"
# include "sort/bubble_sort.h"
# include "sort/selection_sort.h"
# include "sort/insertion_sort.h"

typedef t_clock (*sort_algo)(t_rand_tab *);

typedef enum e_sort
  {
    QUICK_SORT,
    MERGE_SORT,
    BUBBLE_SORT,
    SELECTION_SORT,
    INSERTION_SORT,
    NBR_SORTS
  } t_sort;

#endif  /* !SORTS_H__*/
