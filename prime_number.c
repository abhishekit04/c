#include<stdio.h>

int main() {
	int i=2,num;
	int minimum,maximum;
	printf("enter minimum and maximum number\n");
	scanf("%d%d",&minimum,&maximum);
	for(i = minimum;i<=maximum;i++) {
			while(i<=num-1) {
			if(num%i==0) {
				printf("not a prime number\n");
				break;
			}
			i++;
		}
	}
	if(i==num) {
		printf("%d is a prime number\n",num);		
	}
	if(num==1) {
		printf("1 is not a prime number\n");
	}

 return 0;
	
}