# -*- MakeFile -*-

all: mergeSort
	valgrind --leak-check=full --show-leak-kinds=all --log-file="memory_info.txt" ./mergeSort > output.txt

mergeSort: mergeSort.o
	gcc mergeSort.o -o mergeSort

mergeSort.o: mergeSort.c
	gcc -c mergeSort.c -o mergeSort.o

CLEAN:
	rm -f *.o memory_info.txt output.txt mergeSort
