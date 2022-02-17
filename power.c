#include<stdio.h>
#include<math.h>

int main() {
	int num ;
	printf("enter a number to find its square and cube\n");
	scanf("%d",&num);
	int square = pow(num,2);
	printf("square of %d = %d\n",num,square);
	int cube = pow(num,3);
	printf("cube of %d = %d\n",num,cube);

	int power = pow(5, 11);
	printf("5 raised to the power 11 = %d\n\n", power);
	int rt = sqrt(390625);
	printf("Square root of 390625 = %d", rt);
	
	return 0;
	
}
