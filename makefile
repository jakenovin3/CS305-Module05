CC=gcc

math: math.o
	$(CC) math.o -o math

math.o: math.c
	$(CC) -c math.c

clean:
	rm -f *.o *.exe