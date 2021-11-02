CC = gcc
CFLAGS = 
LIB = 

all: main

sgs_clib_2d_double_array:
	$(CC) $(CFLAGS) -c 2d_array.c


main: sgs_clib_1d_double_array
	$(CC) $(CFLAGS) 2d_array.o main.c -o main

run:
	./main
	
clean:
	rm main.exe

