#include <stdio.h>
#include <stdlib.h>
#define ROW 16
#define COL 16 
#include "matrix.h"

Matrix*  matrixMult(Matrix* A, Matrix* B);

int main(){
	Matrix* A = m_create(ROW,COL);
	m_fillRandom(A,20);
	Matrix* B = m_create(ROW,COL);
	m_fillRandom(B,20);
	printf("Array A:\n");
	m_print(A);
	printf("Array B:\n");
	m_print(B);

	Matrix*	C = matrixMult(A,B);
	printf("After multiplication: ");
	m_print(C);
	return 0;
	m_free(A);
		m_free(B);
			m_free(C);
}


Matrix*  matrixMult(Matrix* A, Matrix* B){

	if (A->col != B->row) {
        printf("Error: Dimension mismatch!\n");
        exit(EXIT_FAILURE);
    }
    
	//create and initialze an empty array
	Matrix* temp= m_create(ROW,COL);
	for(int i = 0 ; i < ROW * COL ; i++){
		temp->data[i] = 0;
	}

	for(int i = 0 ; i< A->row ; i++){
		for(int j = 0 ; j < B->col;j++){
			for(int k = 0 ; k < ROW ; k++){
				*(temp->data + (i * temp->col) + j) += *(A->data + (i*A->col) + k)
													* *(B->data + (k*B->col) + j);
			}
		}
	}

	return temp;
	
}
