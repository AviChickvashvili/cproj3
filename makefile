all: run1 run2 run3

run1: main.o arrays.h
	gcc -o run1 arrays.o main.o

run2: main2.o arrays.h
	gcc -o run2 arrays.o main2.o
	
run3: main3.o string2.h
	gcc -o run3 string2.o main3.o


main.o: main.c arrays.h
	gcc -c arrays.c main.c 

main2.o: main2.c arrays.h
	gcc -c arrays.c main2.c 

main3.o: main3.c string2.h
	gcc -c string2.c main3.c 

.PHONY: clean all

clean: 
	rm -f *.o run1 run2 run3