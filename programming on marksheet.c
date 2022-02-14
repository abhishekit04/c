//programing on marksheet

#include<stdio.h>
#include<conio.h>

int main () {
	float percentage;
	printf("Enter percentage\n");
	scanf("%f",&percentage);
	
	if (percentage >= 60) {
		printf("First Division\n");
	}
	else if (percentage >= 45) {
		printf("second Division\n");
	}
	else if (percentage >= 33) {
		printf("Third Division\n");
	}
	else {
		printf("you are fail\n");
	}
	
	getch ();
	return 0;
	
}
