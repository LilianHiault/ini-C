CC = gcc
FLAGS = -g -Wall -Wextra
OBJETS = factorielle.o

all:factorielle

factorielle:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

factorielle.o:factorielle.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
