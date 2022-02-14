//programing on functions

#include<stdio.h>

int main() { 
	// calling sum function
	int num1 = 5, num2 = 10, num3 = 5;
	printf("%d",sum(num1,num2,num3));
	// calling message function 
	message();

	// calling si function
	si();
	printf("%d",sum(1,4,3));
	return 0;	
}

int sum(int a,int b,int c) {
	return a+b+c;
}
// defining message function

int  message() {
	
	printf("\n\t::: simple interest function ::: \t\n");
	
}

// defining si function

int si() {
	int p,r,t;
	printf("enter principal rate and time\n");
	scanf("%d%d%d",&p,&r,&t);
	float si = (p*r*t)/(float)100;
	printf("si = %.2f",si);
}

