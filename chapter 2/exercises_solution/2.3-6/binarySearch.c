#include <stdio.h>
#define size(a)  sizeof(a)/sizeof(a[0])

int binarySearch(int* A , int n,int value);

int main(){
	int A[] = {
	      2,   5,   8,  12,  15,  19,  22,  25,  29,  33,
	     36,  39,  42,  45,  49,  52,  56,  59,  63,  67,
	     70,  74,  78,  82,  85,  89,  92,  96, 100, 104,
	    108, 111, 115, 119, 123, 126, 130, 134, 138, 142,
	    145, 149, 153, 157, 160, 164, 168, 172, 175, 179,
	    183, 186, 190, 194, 198, 201, 205, 209, 213, 217,
	    220, 224, 228, 232, 236, 239, 243, 247, 251, 255,
	    258, 262, 266, 270, 274, 277, 281, 285, 289, 293,
	    296, 300, 304, 308, 312, 315, 319, 323, 327, 331,
	    335, 338, 342, 346, 350, 354, 357, 361, 365, 369,
	    373, 376, 380, 384, 388, 392, 395, 399, 403, 407,
	    411, 414, 418, 422, 426, 430, 433, 437, 441, 445,
	    449, 452, 456, 460, 464, 468, 471, 475, 479, 483,
	    487, 490, 494, 498, 502, 506, 509, 513, 517, 521,
	    525, 528, 532, 536, 540, 544, 547, 551, 555, 559
	};

	printf("Please enter a number to be searched: ");
	int test;
	scanf("%d",&test);
	int index = binarySearch(A,size(A),test);
	if(index == -1){printf("\nvalue not found");return 0;}
	printf("\n%d found at index: %d",test,index);
	return 0;
}

int binarySearch(int* A , int n , int value){
	int i = 0 ; 
	int j = n-1;
	int mid;
	while (i != j){
		mid = (i + j)/2;
		if(*(A+mid) == value) return mid;
		else if(*(A+mid) < value) i = mid+1;
		else j = mid -1;
	}
	return -1;	
}
