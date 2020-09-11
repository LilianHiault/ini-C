CC = gcc
FLAGS = -g -Wall -Wextra
OBJETS = calculatrice.o

all:calculatrice

calculatrice:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

calculatrice.o:calculatrice.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
