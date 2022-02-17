//syntax
//
//for(initialization; condition; iteration) {
//	statments;
//}
//initialization portion of the loop set a loop control variable to an initial value .
//
//condition : is a boolean expression that tests the loop control varibale 
//if the outcome of that test is true , the for loop continue to iterate . if it is false the loop terminates
//
//the iteration expression determines how the loop control variable is changed each time the loop iterates.

#include<stdio.h>

int main () {
	int i;
	for(i=1;i<=10;i++) {
		printf("%d\n",i);
	}
	return 0;
}
