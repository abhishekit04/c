//2 without return and with parameter

#include<stdio.h>
void greater();
int main() {
	int num1 = 5,num2 = 8;

	greater(num1,num2);
	return 0;
}

void greater(int num1 ,int num2) {
	if(num1>num2) {
	printf("the greater number is : %d",num1);
	}		
	else{
	printf("the greater number is : %d",num2);
	}
}
