// program on for (odd number and even numbers)

#include<stdio.h>

int main () {
	int initial,final,i,count1=0,count2=0,sum1=0,sum2=0;
	printf("enter initial and final range\n");
	scanf("%d%d",&initial,&final);
	printf("\n\n\n");
	if(initial>=final){
		printf("final point should be greater than initial point\n");
	}
	else {
		for(i=initial;i<=final;i++) {
			if(i%2==0) {
				count1++;
				sum1 = sum1+i;
				printf("%d\t(even number)\n",i);		
			} 
			else {
				count2++;
				sum2 = sum2+i;
				printf("%d\t(odd number)\n",i);
			}
		}
		printf("\n\n\n");
		printf("count of even numbers between %d and %d = %d\n",initial,final,count1);
		printf("count of odd numbers between %d and %d = %d\n",initial,final,count2);
		printf("\n\n\n");
		printf("sum of all even numbers between %d and %d = %d\n",initial,final,sum1);
		printf("sum of all odd numbers between %d and %d = %d\n",initial,final,sum2);
	}
	
	return 0;
}
