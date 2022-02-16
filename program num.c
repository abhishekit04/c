#include<stdio.h>
int main () {
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1 :
			printf("case 1 excituted");
			break;
			
		case 2 :
		    printf("case 2 excituted");
			break;
		
		case 3 :
		   printf("case 3 excituted");
		   break;	
		   
		  default :
		  printf("not in a program");
		  break; 	
			
	}
	
	return 0;
}
