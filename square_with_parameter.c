//write a program to find the square of any number using the function with parameter

#include<stdio.h>

int square(int a) {
	return a*a;
}
int cube(int b) {
	return b*b*b;
}

int main() {
	int i,result1,result2;
	printf("enter a number to finds its square and cube  : ");
	scanf("%d",&i);
	result1 = square(i);
	result2 = cube(i);
	printf("square of %d = %d\n",i,result1);
	printf("cube of %d = %d\n",i,result2);

}

