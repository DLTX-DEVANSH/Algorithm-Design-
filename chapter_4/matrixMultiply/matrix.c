#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include <time.h>
#include <stdbool.h>


Matrix* m_create(int m_row, int m_col) {
   
    Matrix* temp = malloc(sizeof(Matrix));

    temp->row = m_row;
    temp->col = m_col;
    
  
    temp->data = malloc(temp->row * temp->col * sizeof(int));
  
    return temp; 
}

void m_print(Matrix* arr) {
  
    for (int i = 0; i < arr->row; i++) {
        printf("{ ");
        for (int j = 0; j < arr->col; j++) {

            printf("%d", *(arr->data + (i * arr->col) + j));
            
            if (j == arr->col - 1) {
                printf(" }\n"); 
            } else {
                printf(", ");
            }
        }
    }
}

void m_free(Matrix* arr){
	if(!arr) return;
	if(arr){
		free(arr->data);
	}
	free(arr);
}


void m_fillRandom(Matrix* M , int u_limit){

	static bool is_seeded = false;
	
	    if (!is_seeded) {
	        srand(time(NULL));
	        is_seeded = true; 
	    }
	for(int i = 0 ; i < (M->col * M->row);i++){
		*(M->data + i) = rand()%u_limit;
	}
}
