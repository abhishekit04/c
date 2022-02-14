// Programing on number divisible by 5 and 3

#include<stdio.h>

int main () {
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	
	if(num%3 != 0) {
		printf("number is not divisible by 3");
	}
	else if (num%5 !=0) {
		printf("number is not divisible by 5 ");
	}
	else {
		printf("number is  divisible by 3");
	}
	else {
		print("number is divisible by 5");
	}
	
	return 0 ;
}
