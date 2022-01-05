#include<stdio.h>

int main () {
	int x[4] = {10,20,30,40};
	
	//print second element
	printf("%d\n",x[1]);
	printf("second element : %d\n",*(x + 1));
	
	//replace the third element
	*(x + 2) = 100;
	printf("third element : %d\n",x[2]);
	
	// assign new value to the fourth element 
	// based on user input 
	
	printf("enter the fourth element: ");
	scanf("%d", x + 3);
	printf("fourth element: %d\n", x[3]);
	
	return 0;
}
