/*
** rand_tab.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Mon Sep 23 12:52:19 2013 thomas miele
** Last update Fri Sep 27 15:00:24 2013 thomas miele
*/

#include "rand_tab.h"

t_rand_tab *create_rand_tab(int size, int min, int max)
{
  t_rand_tab *_new = NULL;
  int i;

  if (size <= 0 || min < 0 || max <= 0)
    return NULL;
  if (min >= max)
    return NULL;

  _new = malloc(sizeof(t_rand_tab));
  if (_new != NULL)
    {
      _new->size = size;
      _new->min = min;
      _new->max = max;
      _new->tab = malloc(sizeof(int) * size);
      if (_new->tab != NULL)
	{
	  for (i = 0; i < size; ++i)
	    {
	      _new->tab[i] = 0;
	    }
	}
      return (_new);
    }
  else
    return (NULL);
}

int free_rand_tab(t_rand_tab *t)
{
  if (t != NULL)
    {
      free(t->tab);
      free(t);
      return 0;
    }
  return -1;
}

void fill_rand_tab(t_rand_tab *t)
{
  int i;

  if (t != NULL)
    {
      for (i = 0; i < t->size; ++i)
	{
	  t->tab[i] = rand() % t->max;
	}
    }
}

void print_rand_tab(t_rand_tab *t)
{
  int i;

  for (i = 0; i < t->size; ++i)
    {
      printf("\t%d", t->tab[i]);
    }
  printf("\n");
}

void my_swap(int *left, int *right)
{
  int tmp = 0;

  tmp = *left;
  *left = *right;
  *right = tmp;
}
