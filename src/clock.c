/*
** clock.c for 301danone in /home/miele_t//Workspace/projects/301danone-2016-miele_t/src
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Fri Sep 27 10:24:07 2013 thomas miele
** Last update Fri Sep 27 10:53:38 2013 thomas miele
*/

#include "clock.h"

t_clock get_current_time()
{
  t_clock c;
  struct timespec time;

  clock_gettime(CLOCK_MONOTONIC, &time);
  c = time.tv_sec * 1000000 + time.tv_nsec / 1000;
  return (c);
}
