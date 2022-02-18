//how to pass array to the function 
//pass 2D array to function 

#include<stdio.h>

void displayNumber(int n[2][2])
{
	//using nested loops to print 
	// elements one by one
	int i,j;
	printf("the elements are\n");
	for( i = 0; i < 2; ++i) {
		for( j = 0; j < 2; ++j) {
			printf("%d ",n[i][j]);
		}
	}
}
int main () {
	int x[2][2] = {
		{3, -2}, {9, 8}
		};
		//when we pass 2D array as an arrugument we use the name of the array ( [] is not used)
		//in the function definition we need to use either n[2][2] or n[][2] so that the compiler knows it is 2D array of the given size
		    
		displayNumber(x);
		return 0;
}
