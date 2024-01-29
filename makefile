es3: main.o
	gcc -o es3 main.o

main.o: main.c
	gcc -Wall -c main.c
