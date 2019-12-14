all: run

run: main.o 
	gcc -o run main.o

main.o: main.c
	gcc -c main.c 

.PHONY: clean all

clean: 
	rm -f *.o bank