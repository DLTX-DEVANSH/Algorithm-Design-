# -*- MakeFile -*-

all: MatrixMultiply 
	valgrind --leak-check=full --show-leak-kinds=all --log-file="memory_info.txt" ./MatrixMultiply > output.txt

MatrixMultiply: MatrixMultiply.o matrix.o
	gcc MatrixMultiply.o matrix.o -o MatrixMultiply

MatrixMultiply.o: MatrixMultiply.c
	gcc -c MatrixMultiply.c -o MatrixMultiply.o 

matrix.o: matrix.c
	gcc -c  matrix.c -o matrix.o

CLEAN:
	rm -f *.o MatrixMultiply matrix memory_info.txt output.txt	
