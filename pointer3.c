#include<stdio.h>

int main () {
	int *pc, c = 5;
	
	// pc contains address of c
	
	pc = &c;
	printf(" address of c  = %p\n", &c); 
	printf("value stored in pc  = %p\n", pc); 
	printf("value stored in pc address = %d\n", *pc); //5
	
	return 0;
}

/*
		get value pointed to by pointers
		
		to get the value pointed by pc, we use *pc
*/
