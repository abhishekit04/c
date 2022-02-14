//Programing on week   

#include<stdio.h>
#include<conio.h>

int main () {
	int week_number;
	printf("enter week number\n");
	scanf("%d",&week_number);
	
	if (week_number == 1){
		printf("sunday");
	}
	else if (week_number == 2){
		printf("monday");
	}
	else if (week_number == 3){
		printf("tuesday");
	} 
	else if (week_number == 4){
		printf("wednesday");
	}
	else if (week_number == 5){
		printf("thursday");
	}
	else if (week_number == 6){
		printf("friday");
	}
	else if (week_number == 7){
		printf("saturday");
	}
	else {
		printf("invalid week number");
	}
	
	getch ();
	return 0;
	
	
}   
