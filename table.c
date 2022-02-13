//program on table

#include<stdio.h>

int main () {
	char another;
	int i;
	do {
		printf("enter a number to finds its square\n");
		scanf("%d",&i);
		printf("square of %d is = %d",i,i*i);
		printf("\nwant to find table of a another number?(y/n)");
		scanf("%c",&another);
	} while(another == 'y');
	
	return 0;
}
