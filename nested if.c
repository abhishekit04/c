#include<stdio.h>

int main() {
	int num1, num2;
	printf("Enter two numbers : \n");	
	scanf("%d%d",&num1, &num2);
	
	if(num1 >= num2) 
	{
		if(num1 == num2) 
		{
			printf("%d is equal to %d\n",num1,num2);
		} 
		else
		{
			printf("\n%d is greater than  %d\n",num1,num2);	
		}		
	}
	else if(num1 <= num2)
	{
		printf("\n%d is less than  %d\n",num1,num2);	
	}
	
	
}
