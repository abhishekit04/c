//3 with return value and without parameter

#include<stdio.h>

int main() {
	int result;
	result = greater();
	printf("the greater number is %d",result);
	return 0;
}
int greater() {
	int num1,num2,greater;
	printf("enter two numbers to compare\n");
	scanf("%d%d",&num1,&num2);
	if (num1>num2) {
		greater = num1;
	}
	else {
		greater = num2;
	}
	
	return greater;
}
