/*
** option2.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep 18 10:41:47 2013 thomas miele
** Last update Fri Sep 27 15:06:51 2013 thomas miele
*/

#include "option2.h"

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
    "tri rapide\t",
    "tri fusion\t",
    "tri a bulles\t",
    "tri par selection",
    "tri par insertion"
  };

t_clock sort_avg(t_clock *durate_list, long size)
{
  int i = 0;
  t_clock v = 0;

  for (i = 0; i < size; ++i)
    {
      v += durate_list[i];
    }
  return (v / size);
}

void option2_generate(t_sort_exec *exec, int size)
{
  t_rand_tab *t = NULL;
  int min = 0;
  int max = 1000;

  int i;
  int j;
  t_clock current_avg = 0;

  printf("%d elements:\n", size);
  t = create_rand_tab(size, min, max);
  for (i = 0; i < NBR_SORTS; ++i)
    {
      printf("%s", sort_name[i]);
      for (j = 0; j < REPEAT_ALGO; ++j)
	{
	  fill_rand_tab(t);
	  current_avg = sort_func[i](t);
	  exec[i].duration[j] = current_avg;
	  printf("\t%ld", exec[i].duration[j] / 1000);
	}
      printf("\n");
      exec[i].avg = sort_avg(exec[i].duration, REPEAT_ALGO);
    }
  free_rand_tab(t);
}

void option2()
{
  int i;
  t_sort_exec avg_10_000[NBR_SORTS];
  t_sort_exec avg_20_000[NBR_SORTS];

  option2_generate(avg_10_000, 10000);
  printf("\n");
  option2_generate(avg_20_000, 20000);

  printf("\n10 000 entiers:\n");
  for (i = 0; i < NBR_SORTS; ++i)
    {
      printf("%s", sort_name[i]);
      printf("\t%ld ms\n", avg_10_000[i].avg / 1000);
    }

  printf("\n20 000 entiers:\n");
  for (i = 0; i < NBR_SORTS; ++i)
    {
      printf("%s", sort_name[i]);
      printf("\t%ld ms\n", avg_20_000[i].avg / 1000);
    }
}
