//4 with retun value and with parameter

#include<stdio.h>
int greater();
int main() {
	int i ,j, result;
	printf("enter 2 numbers that you want to compare\n");
	scanf("%d%d",&i,&j);
	result = greater(i,j);
	printf("greatest number is %d",result);
	return 0;
}

int greater(int i, int j) {
	if(i>j) {
		return i; 
	}		
	else{
		return j;
	}
}



