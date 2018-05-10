/*
** rand_tab.h for 301danone in /home/miele_t//WorkingDraft/projects/301danone/src
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Mon Sep 23 12:52:15 2013 thomas miele
** Last update Fri Sep 27 14:59:52 2013 thomas miele
*/

#ifndef RAND_TAB_H__
# define RAND_TAB_H__

# include <stdlib.h>
# include <stdio.h>

typedef struct s_rand_tab
{
  int *tab;
  int size;
  int min;
  int max;
} t_rand_tab;

t_rand_tab* create_rand_tab(int size, int min, int max);
int free_rand_tab(t_rand_tab *t);
void fill_rand_tab(t_rand_tab *t);
void print_rand_tab(t_rand_tab *t);

void my_swap(int *left, int *right);

#endif  /* !RAND_TAB_H__*/
