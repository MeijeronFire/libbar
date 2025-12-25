all: main.o bar.o
	gcc main.o bar.o -o main
	./main
main.o: main.c
	gcc -c main.c -o main.o
bar.o: bar.c
	gcc -c bar.c -o bar.o
clean:
	rm -f *.o