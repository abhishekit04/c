//program to find loss

#include<stdio.h>
#include<conio.h>

int main () {
	printf("enter sp and cp of any object");
	float sp, cp, loss;
	scanf("%f%f", &sp, &cp);
	loss = cp-sp; 
	
	printf("loss = %f", loss);
	
	getch ;
	return 0 ; 
}
