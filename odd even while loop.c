#include<stdio.h>
#include<conio.h>

int main () {
	int number;
	printf("Enter a number\n");
	scanf("%d", &number);
	
	if (number%2==0 ) {
		printf("even number");
	}
	
	else {
		printf("odd number");
	}
	
	getch;
	return 0;
}
