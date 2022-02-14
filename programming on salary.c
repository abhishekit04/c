// Programing on salary

#include<stdio.h>
#include<conio.h>

int main () {
	int salary;
	printf("enter your salary");
	scanf("%d",&salary);
	
	if (salary >= 25000 ) {
		printf("manager");
	}
	else if (salary >= 20000) {
		printf("accountant");
	}
	else if (salary >= 10000) {
		printf("clerk");
	}
	else {
		printf("No one will work on this salary");
	}
	getch ();
	return 0;
	
	
}
