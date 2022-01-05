//absolute value of a number

#include<stdio.h>

int main() {
	int i;
	printf("enter a number to find its absolute value");
	scanf("%d",i);
	int j = i < 0 ? -i : i;
	printf("%d",j);
	return 0;
}
