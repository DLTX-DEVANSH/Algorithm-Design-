# -*- MakeFile -*-

all: binarySearch binarySearchRecursive
	

binarySearch: binarySearch.o
	gcc binarySearch.o -o binarySearch

binarySearch.o: binarySearch.c
	gcc -c binarySearch.c -o binarySearch.o

binarySearchRecursive: binarySearchRecursive.o
	gcc binarySearchRecursive.o -o binarySearchRecursive

binarySearchRecursive.o: binarySearchRecursive.c
	gcc -c binarySearchRecursive.c -o binarySearchRecursive.o


CLEAN:
	rm -f *.o out.txt binarySearch binarySearchRecursive
