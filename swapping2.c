#include<stdio.h>

int main () {
	int a,b,c;

	
	a=10;
	b=20;
	
	c=a;
	a=b;
	b=c;
	
	
	printf("%d\t%d",a,b);

	return 0;
}
