CFLAGS=-Wall -g

all: ex3 ex6 ex9 ex14 ex15 ex16 ex16_ec ex17 ex18 ex19 ex20

ex19: object.o

clean:
	rm -f ex3 ex4 ex6 ex9 ex14 ex15 ex16 ex16_ec ex17 ex18 ex19 ex20
	rm -f *.o
	rm -rf *.dSYM