/*
** main.c for 301danone in /home/miele_t//WorkingDraft/projects/301danone
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep 18 10:09:48 2013 thomas miele
** Last update Fri Sep 27 14:57:42 2013 thomas miele
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "option1.h"
#include "option2.h"

static int usage(void)
{
  printf("Usage: 301danone [1 | 2]\n");
  return EXIT_FAILURE;
}

int main(int ac, char **av)
{
  int opt = 0;

  srand(time(NULL));
  if (ac != 2)
    return usage();
  opt = atoi(av[1]);
  if (opt == 1)
    option1();
  else if (opt == 2)
    option2();
  else
    return usage();
  return (EXIT_SUCCESS);
}
