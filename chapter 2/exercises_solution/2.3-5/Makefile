# -*- MakeFile -*-

all: 2_3_6
	./2_3_6 > out.txt

2_3_6: 2_3_6.o
	gcc 2_3_6.o -o 2_3_6

2_3_6.o: 2_3_6.c
	gcc -c 2_3_6.c -o 2_3_6.o

CLEAN:
	rm -f *.o out.txt 2_3_6
