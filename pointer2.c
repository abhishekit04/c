#include<stdio.h>

int main () {
	int *pc , c;
//	int* p;
//	printf("value of p = %p\n",p);
	c = 10;
	
	//assign address to a pointer 
	pc = &c;
	
	printf("value of pc = %p\n",pc);
	printf("address of c = %p\n",&c);
	
	return 0;
}

/*
			assigning address to a pointer 
when we declare a pointer random address is a assigned to it by the system   
we have assigned that address of c to the pc pointer using : pc = &c 
now the value of pc and &c (the address of c) will be the same
*/
