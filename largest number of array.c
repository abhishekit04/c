#include<stdio.h>

int main () {
	int arr[5]= {1,5,8,7,9},i;
//	printf("enter 5 numbers\n");
//	
//	for( i = 0; i < 5; ++i) {
//	
//		scanf("%d",&arr[i]);
//	}
	int largest = arr[0];
	for( i = 0; i < 5; ++i) {
		if (largest < arr[i]) {
			largest = arr[i];
		}
	}
	printf("largest number = %d",largest);
	return 0;
}


//largest = 9


