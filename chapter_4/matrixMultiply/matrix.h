#ifndef MATRIX_H
#define MATRIX_X


/******************************************************************
*Note:- I use flattened 1D array format , if you are not familiar  
*       with this format , you can change code to VLA or C90 format  													   
*******************************************************************/


typedef struct {
	int row;
	int col;
	int* data;
} Matrix;


void m_fillRandom(Matrix* arr,int u_limit);
Matrix* m_create(int row , int col);
void m_print(Matrix* arr);
void m_free(Matrix* arr);
#endif

