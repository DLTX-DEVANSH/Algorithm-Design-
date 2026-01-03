#include <stdio.h> 
#include <stdlib.h>
#define size(A) sizeof(A)/sizeof(A[0])


void mergeSort(int* A ,int start , int end);
void merge(int*A , int left , int right , int mid);
void printArr(int* A , int n );

int main(){
	//test array
	int A[]= {1,51,73,1,51846,456,41,65,574,34,896,8,731,54,89645,34187,3,1874,3,1874,354,74,
			  6541,74,321,23,9874,5494,321,9,448,18,6,674,4,988,413,64,4,8946587,354,841648,
			  3,53,51845,8,46,4635,41689,4,64986,489,4,16,358,85,63,667,65,4653,4,768,76,468,76,7468,6468,765,498,47};
	printArr(A,size(A));
	mergeSort(A,0,size(A) - 1);
	printArr(A,size(A));
	return 0;
}

void mergeSort(int* A ,int start , int end){
	if(start >= end) return;

	int mid = (start + end)/2;
	mergeSort(A,start,mid);
	mergeSort(A,mid +1 , end);
	merge(A,start,end,mid);
}

void merge(int* A , int left , int right , int mid){
	//intialization  of array limits
	int n_left = mid - left + 1;
	int n_right = right - mid;

	int* L = (int*)(malloc(n_left*sizeof(int)));
	int* R = (int*)(malloc(n_right*sizeof(int)));

	//intialization of temporary arrays 
	for(int i=0 ; i < n_left ; i++ ){
		*(L+i) = *(A+left+i);
	}

	for(int i=0 ; i < n_right ; i++){
		*(R+i) = *(A+mid+1+i);
	}

	int i =0; 
	int j =0;
	int k = left;

	//actual merging part
	while(j<n_right && i<n_left){

		if(*(L+i) <= *(R+j)){
			*(A+k) = *(L+i);
			i++;
		}else{
			*(A+k) = *(R+j);
			j++;
		}
		k++;
	}

	//inserting the remaining of the 2 array in the orignal array
	while(j<n_right){
		*(A+k) = *(R+j);
		j++;
		k++;
	}

	while(i<n_left){
		*(A+k) = *(L+i);
		i++;
		k++;
	}
	
}

void printArr(int* A , int n ){
	printf("\n");
	for(int i =0 ; i < n ; i++){
		printf("%d, ",*(A+i));
	}	
	printf("\n");
}
























