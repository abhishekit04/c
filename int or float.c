#include<stdio.h>

int main () {
	int num1;
	float num2;
	
	num1=2;
	num2=5.6;
	
	if(num1>num2)
	{
		printf("%d is greater than %.2f", num1,num2);
		
	}
	else 
	{
		printf("%d is not greater than %.2f",num1,num2);
		
	}
	
	return 0;
	
}
