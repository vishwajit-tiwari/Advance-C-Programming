
CC = gcc -g 

all: clearParticularBit

clearParticularBit: clearParticularBit.o
	$(CC) -o clearParticularBit clearParticularBit.o

clearParticularBit.o: clearParticularBit.c
	$(CC) -c -o clearParticularBit.o clearParticularBit.c

clean:
	rm -f *.o clearParticularBit