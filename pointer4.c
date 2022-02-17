#include<stdio.h>
int main() {
	int *pc, c = 22;
	
	printf("address of c : %p\n",&c);
	printf("value of c : %d\n\n",c);
	
	pc = &c;
	printf("address of pc : %p\n",pc);
	printf("content in pc : %d\n\n", *pc);
	
	c = 11;
	printf("content in pc: %d\n\n",*pc);
	
	*pc = 2;
	printf("value of c: %d", c);
	
	return 0;
}

/*
*pc is the syntax we use to access the value stored in the pointer .the * is called the derefrence operator
 when we use it like this  
