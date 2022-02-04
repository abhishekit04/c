#include<stdio.h>
#include<conio.h>

int main () {
	char character;
	printf("Enter a character\n");
	scanf("%c", &character);
	
	if (character  >= 65 && character  <= 90) {
		printf("uppercase");
	}
	else if (character  >= 97 && character  <= 122) {
		printf("lowercase");
	}
	else if (character  >= 48 && character  <= 57) {
		printf("numbers");
	}
	else {
		printf("special symbols");
	}
	
	getch;
	return 0;
}
