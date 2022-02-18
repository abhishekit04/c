#include<stdio.h>

int main () {
	int number;
	printf("Enter a number : \n");
	scanf("%d",&number);
	if(number > 10)
		printf("%d is greater than 10",number);
	else
		printf("%d is not greater than 10 ",number);
		printf("or %d is less than 10 ",number);
		
	return 0;
}

