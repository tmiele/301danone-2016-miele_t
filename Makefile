##
## Makefile for 301danone in /home/miele_t//WorkingDraft/projects/301danone
## 
## Made by thomas miele
## Login   <miele_t@epitech.net>
## 
## Started on  Wed Sep 18 10:07:25 2013 thomas miele
## Last update Fri Sep 27 12:47:37 2013 thomas miele
##

NAME=	301danone

SRC=	src/main.c \
	src/rand_tab.c \
	src/option1.c \
	src/option2.c \
	src/clock.c \
	src/sort/quick_sort.c \
	src/sort/merge_sort.c \
	src/sort/bubble_sort.c \
	src/sort/selection_sort.c \
	src/sort/insertion_sort.c

OBJ=	$(SRC:.c=.o)

CC=	gcc

CFLAGS=	-W -Wall -Wextra -g3

LDFLAGS= -lrt

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(NAME)

clean:
	clean
	clean src/
	clean src/sort/
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
