#include <stdio.h> 
#define ARR_SIZE 10
#define Print_array(A) for(int i =0 ; i < (sizeof(A)/sizeof(A[0]));i++){printf("  %d",*(A+i));} printf("\n"); 
 
void insertion_sort(int* arr , int n);


int main(){
	int arr[ARR_SIZE] = {4,7,2,5,11,734,234,13,85,103};
	Print_array(arr);
	insertion_sort(arr,sizeof(arr)/sizeof(arr[0]));
	Print_array(arr);
	return 0;
}

void insertion_sort(int* arr , int n){
	int j;
	for(int i = 1 ; i < n ; i++){
		int key = *(arr + i);
			j=i -1;
			for(;j>-1 && key< *(arr + j) ;j--){
				*(arr+j+1) = *(arr+j); 
			}
			*(arr+j+1) = key;
	}
}


