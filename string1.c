#include<stdio.h>
#include<string.h>

int main () {
	char name[20];
	printf("What is your name ?");
//	scanf("%s",name);
//	printf("%s",name);
//	gets(name);
	scanf("%[^\n]s",name);
	printf("you have entered your name as \n");
	
	puts(name);
	
	return 0;
} 
