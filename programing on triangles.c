// Programing on triangle

#include<stdio.h>

int main () {
	int a,b,c;
	printf("Enter sides of a triangle\n");
	scanf("%d%d%d",&a, &b, &c);
	
	if (a == b && b == c && c == a) {
		printf("equaliteral triangle");
	}
	else if (a == b && b == a && a != c && b != c) {
		printf("isocles triangle");
	}
	else if (a != b != c) {
		printf("scalene");
	}
	return 0 ;
}
