ifdef ARCH
# cross-compilation
CC = arm-linux-gnueabihf-gcc -g 
else
# native compilation
CC = gcc -g
endif

CC = gcc -g 

all: clearParticularBit

clearParticularBit: clearParticularBit.o
	$(CC) -o clearParticularBit clearParticularBit.o

clearParticularBit.o: clearParticularBit.c
	$(CC) -c -o clearParticularBit.o clearParticularBit.c

clean:
	rm -f *.o clearParticularBit