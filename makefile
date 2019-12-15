all: run

run: main.o arrays.h
	gcc -o run arrays.o main.o

main.o: main.c arrays.h
	gcc -c arrays.c main.c 

.PHONY: clean all

clean: 
	rm -f *.o run