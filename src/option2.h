/*
** option2.h for 301danone in /home/miele_t//WorkingDraft/projects/301danone
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep 18 10:41:19 2013 thomas miele
** Last update Fri Sep 27 14:52:16 2013 thomas miele
*/

#ifndef OPTION_2_H__
# define OPTION_2_H__

# include <stdio.h>

# include "clock.h"
# include "rand_tab.h"
# include "sorts.h"

# define REPEAT_ALGO 6

typedef struct s_sort_exec
{
  t_clock duration[REPEAT_ALGO];
  t_clock avg;
} t_sort_exec;

void option2();

t_clock sort_avg(t_clock *durate_list, long size);
void option2_generate(t_sort_exec *exec, int size);

#endif  // !OPTION_2_H__*/
