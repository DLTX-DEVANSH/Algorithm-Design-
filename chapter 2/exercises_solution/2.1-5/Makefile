# -*- MakeFile -*- 

CC = gcc 

all: 2_1_5
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="memory_info.txt" ./2_1_5
	./2_1_5 > output.txt

2_1_5: 2_1_5.o 
	gcc 2_1_5.o -o 2_1_5

2_1_5.o: 2_1_5.c
	gcc -c 2_1_5.c -o 2_1_5.o

CLEAN:
	rm *.o 2_1_5 memory_info.txt output.txt
