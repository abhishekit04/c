//programing on digits

#include<stdio.h>

object oriented programmings

int main() {
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	
	if(num<=9) {
		printf("single digit");
	}
	
	else if (num<=99) {
		printf("double digit");
	}
	
	else if (num<=999) {
		printf("triple digit");
	}
	
	else {
		printf("all digit numbers");
	}
	
	return 0;
}
