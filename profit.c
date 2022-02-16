//program to find profit

#include<stdio.h>
#include<conio.h>

int main () {
	printf("enter sp and cp of any object");
	float sp, cp, profit;
	scanf("%f%f", &sp, &cp);
	profit = sp - cp; 
	
	printf("Profit = %f", profit);
	
	getch() ;
	return 0 ; 
}
