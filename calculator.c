// calculator.c

#include<stdio.h>

int main () {
	printf("  CALCULATOR  ");
	printf("\n\n");
	int num1, num2, sum, diff, pro, div, rem;
	printf("Enter two numbers to find their sum\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d + %d = %d", num1, num2, sum );
	
	printf("\n------\n");
	
	printf("Enter the two numbers to find their difference\n");
	scanf("%d %d", &num1, &num2);
	diff = num1 - num2;
	printf("%d - %d = %d", num1, num2, diff);
	
	printf("\n----------\n");
	
	
	printf("Enter the two numbers to find their product\n");
	scanf("%d %d", &num1, &num2);
	pro = num1 * num2;
	printf("%d * %d = %d", num1, num2, pro);
	
	printf("\n---------\n");
	
	printf("Enter the two numbers to find quoitent \n");
	scanf("%d %d", &num1, &num2);
	div = num1/num2;
	printf("%d / %d = %d", num1, num2, div);
	
	printf("\n---------\n");
	
	printf("Enter the two numbers to find remainder\n");
	scanf("%d %d", &num1, &num2);
	rem = num1%num2;
	printf("%d %% %d = %d", num1, num2, rem);

	printf("\n\n\n\n");
	printf("Thank you");

	printf("\n\n");
	
	return 0;
	
}
	
	