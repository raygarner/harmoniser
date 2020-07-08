FLAGS = -O3
CC = gcc
SRC = harm.c util.c ui.c
EXES = harm

all: clean harm

harm: $(SRC)
	gcc $(SRC) -o harm

clean:
	rm -f $(EXES) *.o
