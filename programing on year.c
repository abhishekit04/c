// Programing on year

#include<stdio.h>

int main () {
	int year_number;
	printf("Enter the year_number\n");
	scanf("%d", &year_number); 
	
	if (year_number == 1) {
		printf("january");	
	}
	else if (year_number == 2) {
		printf("febuary");
	}
	else if (year_number == 3) {
		printf("march");
	}
	else if (year_number == 4 ) {
		printf("april");
	}
	else if (year_number == 5) {
		printf("may");
	}
	else if (year_number == 6) {
		printf("june");
	}
	else if (year_number == 7) {
		printf("july");
	}
	else if (year_number == 8){
		printf("august");
	}
	else if (year_number == 9) {
		printf("september");
	}
	else if (year_number == 10) {
		printf ("october");
	}
	else if (year_number == 11) {
		printf("november") ;
	}
	else if (year_number == 12) {
		printf("december") ;
	}
	else {
		printf("invalid year number");
	}
	
	return 0;

}
