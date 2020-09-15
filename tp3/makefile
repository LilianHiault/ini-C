CC = gcc
FLAGS = -g -Wall -Wextra
OBJETS = ascii.o

all:ascii

ascii:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

ascii.o:ascii.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
