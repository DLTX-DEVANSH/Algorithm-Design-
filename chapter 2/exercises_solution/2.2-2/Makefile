# -*- MakeFile-*-

all: 2_2_2
	valgrind --log-file="memory_info.txt" ./2_2_2
	./2_2_2 > output.txt

2_2_2: 2_2_2.o
	gcc 2_2_2.o -o 2_2_2

2_2_2.o: 2_2_2.c
	gcc -c 2_2_2.c -o 2_2_2.o

CLEAN:
	rm -f *.o memory_info.txt output.txt 2_2_2
