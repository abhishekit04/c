// substraction of two numbers

#include<stdio.h>

int main () {
	int num1, num2, num3, result;
	printf("enter first number, secound number and third number");
	scanf("%d%d%d", &num1, &num2,&num3);
	
	result = (num1 + num3) - num2;
	
	printf("Result = %d", result);
}
