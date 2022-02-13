#include<stdio.h>

int main () {
	char another = 'n';
	int i;
	do {
		printf("enter a number to finds its square :");
		scanf("%d",&i);
		printf("square of %d is = %d\n",i,i*i);
		printf("want to find square of an another number?(y/n)");
		fflush(stdin);
		scanf("%c",&another);
	} while(another == 'y');
	
	return 0;
}
