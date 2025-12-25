INC_DIR	= include
CFLAGS 	= -I$(INC_DIR)

all: build/main.o build/bar.o
	gcc $(CFLAGS) build/main.o build/bar.o -o build/main
build/main.o: src/main.c
	mkdir -p build/
	gcc -c $(CFLAGS) src/main.c -o build/main.o
build/bar.o: src/bar.c
	gcc -c $(CFLAGS) src/bar.c -o build/bar.o
clean:
	rm -f build/*