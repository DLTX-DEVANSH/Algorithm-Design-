# -*- MakeFile -*-

all: insertion_sort

insertion_sort: insertion_sort.o
	gcc insertion_sort.o -o insertion_sort

insertion_sort.o: insertion_sort.c
	gcc -c insertion_sort.c -o insertion_sort.o

out: insertion_sort
	touch out.txt
	./insertion_sort > out.txt

CLEAR: 
	rm -f *.o out.txt insertion_sort
