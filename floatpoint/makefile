CC=gcc
all=test

test: floatpoint.o
	$(CC) floatpoint.o -o test

floatpoint.o: floatpoint.c
	$(CC) -c floatpoint.c

clean:
	rm -rf *o test
