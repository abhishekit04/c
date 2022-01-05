//pass address as function arrugument
 
#include<stdio.h>

// the function doesnt return anything 
void changevalue(int *n) {
	*n = 100;
}

int main() {
	int number = 5;
	
	printf("before, number = %d\n",number); //5
	changevalue(&number);
	printf("After, number = %d\n",number); //100
	
	return 0;
}
