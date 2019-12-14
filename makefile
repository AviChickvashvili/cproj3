all: mains

mains: mains.o 
	gcc -o mains main.o

main.o: mains.c
	gcc -c mains.c 

.PHONY: clean all

clean: 
	rm -f *.o bank