ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-gcc -g 
else
# Native-toolchain
CC = gcc -g 
endif


all: setParticularBit

setParticularBit: setParticularBit.o 
	$(CC) -o setParticularBit setParticularBit.o 

setParticularBit.o: setParticularBit.c 
	$(CC) -c -o setParticularBit.o setParticularBit.c

clean:
	rm -rf *.o setParticularBit 