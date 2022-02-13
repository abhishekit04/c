// WAP in c find the sum of all elements of an array

#include<stdio.h>

int main () {
	int x[10]= {2,3,0,-4,9,1,-4,-2,7,6},i,sum=0;
	printf("%d\n",x[1]);
	
	for(i=0; i<10; i++) {
		printf("%d ",x[i]);
		sum+=x[i];	// sum = sum + x[i];
	}
	printf("\n\n%d",sum);
}
