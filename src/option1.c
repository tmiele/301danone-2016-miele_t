/*
** option1.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep 18 10:40:47 2013 thomas miele
** Last update Fri Sep 27 15:00:49 2013 thomas miele
*/

#include "option1.h"

static sort_algo sort_func[NBR_SORTS] =
  {
    &quicksort,
    &mergesort,
    &bubblesort,
    &selectionsort,
    &insertionsort
  };

static char *sort_name[NBR_SORTS] =
  {
    "tri rapide",
    "tri fusion",
    "tri a bulles",
    "tri par selection",
    "tri par insertion"
  };

void option1()
{
  t_rand_tab *t = NULL;
  int size = 10;
  int min = 0;
  int max = 1000;
  int i;

  t = create_rand_tab(size, min, max);
  for (i = 0; i < NBR_SORTS; ++i)
    {
      fill_rand_tab(t);
      printf("%s\n", sort_name[i]);
      print_rand_tab(t);
      sort_func[i](t);
      print_rand_tab(t);
    }
  free_rand_tab(t);
}
