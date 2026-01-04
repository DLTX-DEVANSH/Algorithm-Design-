#include <stdio.h> 
#include <stdlib.h> 
#define size(A)   sizeof(A)/sizeof(A[0])

void isort(int* A , int n);

void print(int* A , int n);

int main(){
	int a[] ={48,48,413,7,7,32,3218,35,432489,465,356,7852,458,22,247,458,25
			  ,846,6765,468,7,9847,94,9874,987,9647,9,16,1432,46,51,9874,657};
	print(a,size(a));
	isort(a,size(a)-1);
	print(a,size(a));
	return 0;
	
}

void isort(int* A , int n){
	if(n==0)return;
	isort(A,n-1);
	int key = *(A+n);
	int j = n-1;
	while(j>=0 && key < *(A+j)){
		*(A + j + 1) = *(A+j);
		j--;
	}
	*(A+j+1) = key;
}


void print(int* A,int n ){
	printf("\n");
	for(int i =0 ; i<n;i++){
		printf("%d , ",*(A+i));
	}
	printf("\n");
}
