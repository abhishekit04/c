/* 			introduction to array 
An array is a block of sequential data 
	1.	the diff b/w two consecutive elements of the array is 4 bytes. it is because  array is of type
		int and the size of int is 4 bytes
	2.	the address of &x[0] and x is same 
	it is because the x points to the first element of an array
	&x[0] is equivalent to x and x[0] is equivalent to *x
	&x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1)
	&x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2)
	*/

#include<stdio.h>



int main () {
	int x[3]={2,4,6},i;
	for ( i = 0; i < 3; ++i) {

		printf("&x[%d] = %p\n",i,&x[i]);
	}
	printf("Address of array x : %p", x);
	
	return 0;
}

