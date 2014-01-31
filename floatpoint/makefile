CC=gcc
all=test

floatpoint: floatpoint.o
	$(CC) floatpoint.o -o floatpoint

floatpoint.o: floatpoint.c
	$(CC) -c floatpoint.c

clean:
	rm -rf *o test
