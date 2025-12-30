#include <stdio.h>
#define ASize(A)   sizeof(A)/sizeof(A[0])


void ssort(int* A , int n);
void printArray(int* A , int n);

int main(){
	int test[] = {111,65464,1,4,43,847,3,6,564,431,4,86,3218,7,421,68,74,531,869,574,58,974,867};
	printArray(test,ASize(test));
	ssort(test,ASize(test));
	printArray(test,ASize(test));
	return 0;
}

void printArray(int* A , int n){
	printf("\n");
	for(int i = 0 ; i < n; i++){
		printf("%d , ",*(A+i));
	}
}

void ssort(int* A , int n){
	int j,temp,min_index;
	for(int i = 0 ;i < n-1 ;i++){
		j = i + 1;
		min_index = i;
		while(j<n){
			if(*(A+j) < *(A + min_index)){
				
				min_index =j;
			} 
			j++;
		}
		temp = *(A + min_index);
		*(A + min_index) = *(A+i) ;
		*(A+i) = temp;
	}
}
