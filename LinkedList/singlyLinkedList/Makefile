ifdef ARCH
# Cross-toolchain
CC = arm-linux-gnueabihf-gcc -g 
else
# Native-toolchain
CC = gcc -g 
endif


all: linkedList

linkedList: linkedList.o 
	$(CC) -o linkedList linkedList.o 

linkedList.o: linkedList.c 
	$(CC) -c -o linkedList.o linkedList.c

clean:
	rm -rf *.o linkedList 