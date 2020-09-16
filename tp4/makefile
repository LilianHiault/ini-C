CC = gcc
FLAGS = -g -Wall -Wextra
OBJETS = pendu.o

all:pendu

pendu:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

pendu.o:pendu.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
