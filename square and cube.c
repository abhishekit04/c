// Programing on number divisible by 5 and 3

#include<stdio.h>

int main () {
	int num,square,cube;
	printf("enter a number\n");
	scanf("%d",&num);
	square = num * num;
	cube = num*num*num;
	
	printf("square of %d = %d\n",num,square);

	printf("cube of %d = %d\n",num,cube);
	
	
	return 0 ;
}
