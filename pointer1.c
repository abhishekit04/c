#include<stdio.h>

int main () {
	int var1 = 5;
	printf("var1 = %d\n",var1);
	
	// we have used &var1 here
	// we use %p to point address
	
	printf("address of var1 = %p",&var1);
	
	return 0;
}


/*
pointer allows us to work with  addresses
 pointer is a special variable that stores address rather than value
      		create pointers
1st method : int* p;
we can also create pointers in other two ways
2nd method : int *p1; 
			 int *p2;

3rd method : int* p3, p4;
*/  
