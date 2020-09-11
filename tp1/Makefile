CC = gcc
FLAGS = -g -Wall -Wextra
OBJETS = affichages.o

all:affichages

affichages:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

affichages.o:affichages.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
