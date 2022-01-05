#include<stdio.h>

 int main () {
	int num1,num2,reminder;
	printf("enter two numbers \n");
	scanf("%d%d",&num1,&num2);

    	reminder = num1%num2;

	printf("reminder= %d",reminder);

	return 0 ;

}