ifdef ARCH
# cross-compilation
CC = arm-linux-gnueabihf-gcc -g 
else
# native compilation
CC = gcc -g
endif

all: toggleParticularBit 

toggleParticularBit: toggleParticularBit.o
	$(CC) -o toggleParticularBit toggleParticularBit.o

toggleParticularBit.o: toggleParticularBit.c 
	$(CC) -c -o toggleParticularBit.o toggleParticularBit.c 

clean:
	rm -f toggleParticularBit.o toggleParticularBit


