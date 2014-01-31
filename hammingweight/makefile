CC=gcc
all=hammingweight

hammingweight: hammingweight.o
	$(CC) hammingweight.o -o hammingweight

hammingweight.o: hammingweight.c
	$(CC) -c hammingweight.c

clean:
	rm -rf *o hammingweight
