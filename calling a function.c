#include<stdio.h>

int main () {
	message();
	printf("\ntry try and try again\n");
	sum();
	multiply();
	div();
	sub();
	message();
	message();
	sum();
	sub();
	multiply();
	div();
	return 0;	


}

message() {
	printf("sum of two numbers\n");
	
}
sum() {
	int num1,num2,result;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("%d + %d == %d\n",num1,num2,num1+num2);
} 

sub() {
	int num1,num2,result;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	result = num1 - num2;
	printf("%d - %d == %d\n",num1,num2,result);
}
multiply() {
		int num1,num2,result;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	result = num1 * num2;
	printf("%d * %d == %d\n",num1,num2,result);
}
div() {
		int num1,num2,result;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	result = num1/num2;
	printf("%d / %d == %d\n",num1,num2,result);
}

