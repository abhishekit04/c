// Programing on leap year

#include<stdio.h>
#include<conio.h>

int main () {
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	
	if(year % 400 == 0 && year % 4 == 0) {
		printf( "%d is a leap year\n" ,year);
	}
	else if (year % 100 == 0 ) {
		printf("%d is not a leap year\n",year);
	}
	else {
		printf("%d is  leap year\n",year);
	}
	
	
	return 0;
}
