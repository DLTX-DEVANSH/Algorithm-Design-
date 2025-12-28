#include <stdio.h>
#include <stdlib.h> 

int* binaryAdd(int* A , int* B , int n);

int main(){
	int A[] = {1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,1};
	int B[] = {1,0,0,1,1,1,0,1,0,1,0,0,0,0,0,0,1,0,1,1,0,1,1,1,0,1,1,0,0};

	int* sum = binaryAdd(A,B,sizeof(A)/sizeof(A[0]));
	for(int i = 0 ; i < sizeof(A)/sizeof(A[0]) + 1 ; i++){
		printf("%d",*(sum + i));
	}
	return 0;
}

int* binaryAdd(int* A , int* B , int n){
	int carry =0 ;
	int* temp = malloc((n+1)*sizeof(int));
	for(int i = n-1 ; i >= 0 ; i--){
		*(temp + i + 1 ) = (*(A+i) + *(B+i) + carry)%2;
		carry = (*(A+i) + *(B+i) + carry)/2;
	}
	*(temp ) = carry ;
	return temp; 
}
