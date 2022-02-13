#include<stdio.h>

int z=10; //global variable

int sum(int a, int b) {
	return a+b;
}



int main () {
	int i,j;
	i=10,j=20;
	int s=sum(i,j);
	printf("sum=%d\n",s);
	printf("z=%d\n",z);
	
	return 0;
	
}


