#include<stdio.h>

int main () {
	int num1,num2,num3;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("before swapping\n");
	printf("%d and %d",num1,num2);
	
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	printf("\n\n\nafter swapping\n");
	printf("%d and %d",num1,num2);
	
	return 0;
}
