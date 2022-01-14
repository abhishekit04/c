//program on table

#include<stdio.h>

int main () {
	int n;
	int i;
	printf("enter a number to finds its table\n");
	scanf("%d",&i);
	for(n=1;n<=10;n++) {
		printf("%d * %d = %d\n",i,n,i*n);
	}
	
	return 0;
}
