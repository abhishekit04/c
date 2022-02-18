//program on table

#include<stdio.h>
#include<math.h>

int main () {
	int n=1;
		int i;
		printf("enter a number to find its table\n");
		scanf("%d",&i);
	while(n<=10){
	
		printf("%d * %d = %d\n",i,n,n*i);
		n++;
	}
}
