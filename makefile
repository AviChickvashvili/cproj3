all: run1 run2

run1: main.o arrays.h
	gcc -o run1 arrays.o main.o
run2: main2.o arrays.h
	gcc -o run2 arrays.o main2.o

main.o: main.c arrays.h
	gcc -c arrays.c main.c 

main2.o: main2.c arrays.h
	gcc -c arrays.c main2.c 

.PHONY: clean all

clean: 
	rm -f *.o run1 run2