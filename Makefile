CC=g++
WFLAG=-Wall

all: output

main.o: main.cpp
	$(CC) -c main.cpp -o main.o

bit.o: bit.cpp
	$(CC) -c bit.cpp -o bit.o

output: main.o bit.o
	$(CC) $(WFLAG) main.o bit.o -o output

clean: 
	rm -rf *.o output