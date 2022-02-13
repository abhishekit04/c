// switch

#include<stdio.h>

int main () {
	char operator;
	int a,b;
	printf("enter operator(+, -, *, /, %%)\n");
	scanf("%c",&operator);
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	switch(operator)
	{
		case '+' :
			printf("sum = %d",a+b);
			;
		case '-' :
			printf("difference = %d",a-b);
			break;
		case '%' :
			printf("reminder=%d",a%b) ;
			break;
			
		case '*' :
			printf("multiplication = %d",a*b);
			break;
		case '/' :
			printf("division=%d",a/b);
			break;
				
		default:
			printf("invalid operator");
			break;
		}
				
	return 0;
}
