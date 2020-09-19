CC = gcc
FLAGS = -g -Wall -Wextra -Wdeclaration-after-statement -Werror=vla
OBJETS = motus.o

all:motus

motus:$(OBJETS)
	$(CC) $(FLAGS) -o $@ $(OBJETS)

motus.o:motus.c
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJETS)
